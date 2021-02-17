#include <iostream>
#include "componentCreator.hpp"
#include "c4081.hpp"
#include "circuit.hpp"
#include "circuitFactory.hpp"

int main()
{
    nts::CircuitFactory factory;
    nts::IComponent *component;
    component = factory.createComponent("4081").release();
    return 0;
}
