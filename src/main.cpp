#include <iostream>
#include "componentCreator.hpp"
#include "c4081.hpp"
#include "circuit.hpp"
#include "circuitFactory.hpp"
#include "core.hpp"
#include "include/fileParser/parser.hpp"
#include "graph.hpp"
#include "exceptions/basicException.hpp"

int main(int ac, char **av)
{

//    nts::Circuit circuit;
//    nts::CircuitFactory factory;
//    nts::IComponent *component;
//    Line parser;
//    component = factory.createComponent("input").release();
//    circuit.addComponent(component);
//    component = factory.createComponent("4001").release();
//    component = factory.createComponent("4081").release();
//    circuit.addComponent(component);
//    Core core(ac, av);
//    core.init();

        nts::File file(av[1]);
        nts::graph graph(&file);
    try {
    } catch (nts::basicException exception) {
        std::cout << "An exception:" << exception.what() << std::endl;
    }
    return 0;
}
