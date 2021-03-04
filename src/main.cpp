#include <iostream>
#include "core.hpp"
#include "graph.hpp"
#include "exceptions/basicException.hpp"
#include "execute/Execute.hpp"
#include "IComponent.hpp"
#include "circuitFactory.hpp"

int main(int ac, char **av)
{
    if (ac < 1)
        return (84);
    std::string command;

    try {
        nts::File file(av[1]);
        nts::graph graph(&file);
        nts::Execute exec(&graph);
        while (!exec.getEnd()) {
            std::cout << "> ";
            //std::cin >> command;
            getline(std::cin, command);
            exec.checkCommand(command, &graph);
        }
    } catch (nts::basicException exception) {
        std::cout << "An exception has occurred: " << exception.what() << std::endl;
    }
    return 0;
}
