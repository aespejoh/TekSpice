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
        nts::File fileCheck(av[1]);
        nts::graph graph(&file, &fileCheck);
        nts::Execute exec(&graph);
        while (!exec.getEnd()) {
            std::cout << "> ";
            getline(std::cin, command);
            if (std::cin.eof())
                exec.exit();
            else
                exec.checkCommand(command, &graph);
        }
    } catch (nts::basicException exception) {
        std::cout << "An exception has occurred: " << exception.what() << std::endl;
    }
    return 0;
}
