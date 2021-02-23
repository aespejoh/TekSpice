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
#include "include/fileParser/parser.hpp"
#include "IComponent.hpp"
#include <map>
#include "circuitFactory.hpp"

namespace nts {
    class graph {
    public:
        typedef void (graph::*fnc_ptr)(std::string);
        typedef std::map<std::string, fnc_ptr> map_t;
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
        //void displayGraph();

    private:
        void sepParse(nts::Parser parse);
        void sepInputs(std::string component);
        void sepOutputs(std::string component);
        void sepCircuit(std::string component);
        component createComponent(std::string name, Type type);
        void createGraph(const std::string& componentOne,
                         const std::string& componentTwo);
        void setValue(std::string component);
        std::string getName(std::string component);
        int getValue(std::string component);
        component getComponent(std::string name);

        std::vector<IComponent> _components;
        //std::vector<component> _components;
        std::vector<std::vector<component>> _graph;

        bool is_link;
        bool is_chipset;
        map_t _command_list;
    };
}

#endif //NANOTEKSPICE_GRAPH_HPP
