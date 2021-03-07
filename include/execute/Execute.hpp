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
        explicit Execute(graph *graph);
        ~Execute();
        bool getEnd();
        void exec(std::string &type);
        void mainLoop(nts::graph graph);
        void simulate();
        void exit();
        void display();
        void dump();
        void update();
        void loop();
        static void stop(int);
        void changeValue(std::string& command, graph *);
        void checkCommand(std::string &command, nts::graph *graph);
        typedef void (nts::Execute::*fnc_ptr)();
        typedef std::map<std::string, fnc_ptr> map_t;

    private:
        static bool _stop;
        graph *_graph;
        map_t _execution;
        int _tick;
        bool _end;
    };
}

#endif //EXECUTE_HPP
