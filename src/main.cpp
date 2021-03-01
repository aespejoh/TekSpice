#include <iostream>
#include "componentCreator.hpp"
#include "c4081.hpp"
#include "circuit.hpp"
#include "circuitFactory.hpp"
#include "core.hpp"
#include "parser.hpp"
#include "graph.hpp"
#include "exceptions/basicException.hpp"
#include "execute/execute.hpp"

int main(int ac, char **av)
{
    nts::execute exec;
    std::string command;
    int i = 0;

    try {
        nts::File file(av[1]);
        nts::graph graph(&file);
        while (!exec.getEnd() && i < 2) {
            std::cout << "> ";
            std::cin >> command;
            std::cout << command << std::endl;
            i++;
        }
    } catch (nts::basicException exception) {
        std::cout << "An exception:" << exception.what() << std::endl;
    }
    return 0;
}
