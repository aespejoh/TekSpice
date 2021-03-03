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
        enum Type {
            INPUTS,
            OUTPUTS,
            CIRCUIT
        };
        struct component {
            std::string name;
            nts::Tristate value;
            Type type;
        };
        explicit graph(nts::File *file);
        ~graph() = default;

        std::vector<std::vector<IComponent*>> _graph;
        std::vector<std::vector<Pin*>> _pin_graph;
        void setState(Tristate, std::string);
        Tristate getState();
        //void displayGraph();
        const std::vector<IComponent *> &getComponents() const;

    private:
        void sepParse(nts::Line parse);
//        void sepInputs(std::string component);
//        void sepOutputs(std::string component);
//        void sepCircuit(std::string component);
        component createComponent(std::string name, Type type);
        void createGraph(const std::string& componentOne,
                         const std::string& componentTwo);
        void setValue(std::string component);
        int getInt(std::string component);
        std::string getName(std::string component);
        int getValue(std::string component);
        IComponent * getComponent(std::string name);
        std::vector<IComponent*> _components;
        //std::vector<component> _components;
        CircuitFactory factory;
        bool is_link;
        bool is_chipset;
    };
}

#endif //NANOTEKSPICE_GRAPH_HPP
