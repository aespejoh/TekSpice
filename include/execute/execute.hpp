/*
** EPITECH PROJECT, 2021
** execute.hpp.h
** File description:
** execute.hpp.h
*/
#ifndef EXECUTE_HPP
#define EXECUTE_HPP

#include <map>

namespace nts {
    class execute {
    public:
        execute();
        ~execute();

        bool getEnd();

        void exec(const std::string &type);

        void simulate();
        void exit();
        void display();
        void dump();

        typedef void (nts::execute::*fnc_ptr)();
        typedef std::map<std::string, fnc_ptr> map_t;

    private:
        map_t _execution;
        int _tick;
        bool _end;
    };
}

#endif //EXECUTE_HPP
