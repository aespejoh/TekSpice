cmake_minimum_required(VERSION 3.17)
project(nanoTekSpice)

include_directories(.)
include_directories(./include)
include_directories(./include/components)

set(CMAKE_CXX_STANDARD 14)

add_executable(nanotekspice src/main.cpp include/IComponent.hpp src/component.cpp include/component.hpp src/IComponent.cpp src/components/c4001.cpp include/components/c4001.hpp src/components/c4081.cpp include/components/c4081.hpp include/circuit.hpp src/fileParser/parser.cpp include/fileParser/parser.hpp src/pin.cpp include/pin.hpp src/pinMap.cpp include/pinMap.hpp src/componentCreator.cpp include/componentCreator.hpp src/circuit.cpp src/circuitFactory.cpp include/circuitFactory.hpp src/core.cpp include/core.hpp src/checker.cpp include/checker.hpp src/fileParser/file.cpp include/fileParser/file.hpp src/fileParser/parser.cpp include/fileParser/parser.hpp src/graph.cpp include/graph.hpp src/components/input.cpp include/components/input.hpp src/components/output.cpp include/components/output.hpp src/exceptions/basicException.cpp include/exceptions/basicException.hpp src/exceptions/fileException.cpp include/exceptions/fileException.hpp src/execute/Execute.cpp include/execute/Execute.hpp src/exceptions/executeException.cpp include/exceptions/executeException.hpp src/fileParser/line.cpp include/fileParser/line.hpp src/exceptions/graphException.cpp include/exceptions/graphException.hpp include/Tristate.hpp src/logic.cpp include/logic.hpp)