#include <iostream>
#include "componentCreator.hpp"
#include "c4081.hpp"
#include "circuit.hpp"

int main()
{
    nts::ComponentCreator creator;
    nts::Circuit circuit;
    creator.create("../nts/4081.nts", circuit.createComponent("4081"));
    return 0;
}
