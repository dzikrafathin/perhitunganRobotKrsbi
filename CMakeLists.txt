cmake_minimum_required (VERSION 3.0)
project(MatTriX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_subdirectory(kinematikaBalik)
add_subdirectory(gui)

add_executable(Main main.cpp)

#target_link_libraries (Main PUBLIC Eigen3::Eigen KinematikaBalik)
target_link_libraries(Main PUBLIC KinematikaBalik MainWindow Qt5::Widgets)
target_include_directories(Main PUBLIC "${PROJECT_BINARY_DIR}")
