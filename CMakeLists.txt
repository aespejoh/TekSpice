cmake_minimum_required(VERSION 3.17)
project(bootstrap)

include_directories(.)

set(CMAKE_CXX_STANDARD 14)

add_executable(bootstrap src/main.cpp include/IComponent.hpp src/component.cpp include/component.hpp src/IComponent.cpp src/components/c4001.cpp include/components/c4001.hpp src/components/c4081.cpp include/components/c4081.hpp include/circuit.hpp src/parser.cpp include/parser.hpp src/pin.cpp include/pin.hpp src/pinMap.cpp include/pinMap.hpp)