add_library(AngkaInputWidget AngkaInputWidget.cpp)

target_link_libraries(AngkaInputWidget Qt5::Widgets)
target_include_directories(
    AngkaInputWidget
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)