/*
** EPITECH PROJECT, 2021
** Execute.hpp.h
** File description:
** Execute.hpp.h
*/
#ifndef EXECUTE_HPP
#define EXECUTE_HPP

#include "graph.hpp"
#include <map>
#include <algorithm>

namespace nts {
    class Execute {
    public:
        Execute();
        ~Execute();

        bool getEnd();

        void exec(std::string &type);

        void simulate();
        void exit();
        void display();
        void dump();

        void changeValue(std::string& command, graph *);
        void checkCommand(std::string &command, nts::graph *graph);

        typedef void (nts::Execute::*fnc_ptr)();
        typedef std::map<std::string, fnc_ptr> map_t;

    private:
        map_t _execution;
        int _tick;
        bool _end;
    };
}

#endif //EXECUTE_HPP
