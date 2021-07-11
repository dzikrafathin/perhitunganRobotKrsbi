find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_library(KinematikaBalik KinematikaBalik.cpp)

target_link_libraries(KinematikaBalik Eigen3::Eigen)

target_include_directories(
    KinematikaBalik
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)