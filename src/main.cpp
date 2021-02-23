#include <iostream>
#include "componentCreator.hpp"
#include "c4081.hpp"
#include "circuit.hpp"
#include "circuitFactory.hpp"
#include "core.hpp"
#include "parser.hpp"
#include "graph.hpp"

int main(int ac, char **av)
{
    /*nts::Circuit circuit;
    nts::CircuitFactory factory;
    nts::IComponent *component;
    Parser parser;
    component = factory.createComponent("4001").release();
    circuit.addComponent(component);
    component = factory.createComponent("4081").release();
    circuit.addComponent(component);
    Core core(ac, av);
    core.init();*/

    nts::File file(av[1]);
    nts::graph graph(&file);

    return 0;
}
