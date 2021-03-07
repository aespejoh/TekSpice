#include <iostream>
#include "graph.hpp"
#include "exceptions/basicException.hpp"
#include "execute/Execute.hpp"
#include "IComponent.hpp"
#include "circuitFactory.hpp"

int nano(char **av)
{
    try {
        nts::File file(av[1]);
        nts::File fileCheck(av[1]);
        nts::graph graph(&file, &fileCheck);
        nts::Execute exec(&graph);
        exec.mainLoop(graph);
    } catch (nts::basicException exception) {
        std::cout << "An exception has occurred: " << exception.what() << std::endl;
        return 84;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (ac < 2) {
        std::cout << "Not enough arguments" << std::endl;
        return 84;
    }
    return nano(av);
}
