add_subdirectory(InputWidget)

add_library(MainWindow MainWindow.cpp)

target_link_libraries(MainWindow InputWidget Qt5::Widgets)
target_include_directories(
    MainWindow
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)