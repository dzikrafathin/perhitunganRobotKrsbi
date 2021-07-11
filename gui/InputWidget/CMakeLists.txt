add_subdirectory(AngkaInputWidget)

add_library(InputWidget InputWidget.cpp)

target_link_libraries(InputWidget AngkaInputWidget Qt5::Widgets)
target_include_directories(
    InputWidget
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)