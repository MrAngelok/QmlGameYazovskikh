cmake_minimum_required(VERSION 3.16)

# Название проекта
set(nameApp QmlGameYazovskikh)

project(${nameApp} VERSION 0.1 LANGUAGES CXX)
set(QT_VERSION_MAJOR 6)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

# Находим модули Qt
find_package(Qt6 REQUIRED COMPONENTS Core Quick Qml Gui)

qt_standard_project_setup(REQUIRES 6.8)

# Основной исполняемый файл
qt_add_executable(${nameApp}
    src/main.cpp
    src/core/theme_singleton.cpp  #Добавляем C++ singleton
)

# Добавляем QML-модуль
qt_add_qml_module(${nameApp}
    URI TheGame
    VERSION 1.0
    QML_FILES
        src/qml/Main.qml
    SOURCES
     src/core/theme_singleton.h
)

# Подключаем C++ файлы
target_include_directories(${nameApp} PRIVATE src/core)
target_link_libraries(${nameApp} PRIVATE Qt6::Core Qt6::Quick Qt6::Qml Qt6::Gui)

