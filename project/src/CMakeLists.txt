cmake_minimum_required(VERSION 3.14)

set(pybind11_DIR "C:/Users/Twinkie/AppData/Local/Programs/Python/Python311/Lib/site-packages/pybind11/share/cmake/pybind11")

project(backtest VERSION 1.0 LANGUAGES CXX)

find_package(Python3 REQUIRED COMPONENTS Interpreter Development)
find_package(pybind11 REQUIRED PATHS ${pybind11_DIR})

add_library(backtest MODULE backtest.cpp)

set_target_properties(backtest PROPERTIES SUFFIX ".pyd")

target_link_libraries(backtest PRIVATE Python3::Python pybind11::module)

target_compile_features(backtest PRIVATE cxx_std_14)
