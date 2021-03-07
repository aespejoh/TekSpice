cmake_minimum_required(VERSION 3.17)
project(nanoTekSpice)

include_directories(.)
include_directories(./include)
include_directories(./include/components)
include_directories(./include/exceptions)

set(CMAKE_CXX_STANDARD 14)

add_executable(nanotekspice src/main.cpp include/IComponent.hpp src/IComponent.cpp src/components/c4001.cpp include/components/c4001.hpp src/components/c4081.cpp include/components/c4081.hpp src/fileParser/parser.cpp include/fileParser/parser.hpp src/pin.cpp include/pin.hpp src/pinMap.cpp include/pinMap.hpp src/componentCreator.cpp include/componentCreator.hpp src/circuitFactory.cpp include/circuitFactory.hpp src/fileParser/file.cpp include/fileParser/file.hpp src/fileParser/parser.cpp include/fileParser/parser.hpp src/graph.cpp include/graph.hpp src/components/input.cpp include/components/input.hpp src/components/output.cpp include/components/output.hpp src/exceptions/basicException.cpp include/exceptions/basicException.hpp src/exceptions/fileException.cpp include/exceptions/fileException.hpp src/execute/Execute.cpp include/execute/Execute.hpp src/exceptions/executeException.cpp include/exceptions/executeException.hpp src/fileParser/line.cpp include/fileParser/line.hpp src/exceptions/graphException.cpp include/exceptions/graphException.hpp include/Tristate.hpp src/logic.cpp include/logic.hpp src/exceptions/extensionException.cpp include/exceptions/extensionException.hpp src/exceptions/ComponentException.cpp include/exceptions/ComponentException.hpp src/clock.cpp include/components/clock.hpp src/components/c4030.cpp include/components/c4030.hpp src/components/c4069.cpp include/components/c4069.hpp src/components/c4071.cpp include/components/c4071.hpp src/components/true.cpp include/components/true.hpp src/components/false.cpp include/components/false.hpp)