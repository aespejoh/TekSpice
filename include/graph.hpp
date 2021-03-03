/*
** EPITECH PROJECT, 2021
** graph.hpp.h
** File description:
** graph.hpp.h
*/
#ifndef NANOTEKSPICE_GRAPH_HPP
#define NANOTEKSPICE_GRAPH_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "include/fileParser/file.hpp"
#include "include/fileParser/line.hpp"
#include "IComponent.hpp"
#include <map>
#include "circuitFactory.hpp"

namespace nts {
    class graph {
    public:
        explicit graph(nts::File *file);
        ~graph() = default;

        std::vector<std::vector<IComponent*>> *getGraph();
        std::vector<std::vector<Pin*>> *getPinGraph();
        std::vector<IComponent*> *getComponents();

    private:
        std::vector<std::vector<IComponent*>> _graph;
        std::vector<std::vector<Pin*>> _pin_graph;
        void sepParse(nts::Line parse);
        void createGraph(const std::string& componentOne,
                         const std::string& componentTwo);
        int getInt(std::string component);
        std::string getName(std::string component);
        IComponent * getComponent(std::string name);
        std::vector<IComponent*> _components;
        CircuitFactory factory;
        bool is_link;
        bool is_chipset;
    };
}

#endif //NANOTEKSPICE_GRAPH_HPP
