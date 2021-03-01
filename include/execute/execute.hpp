/*
** EPITECH PROJECT, 2021
** execute.hpp.h
** File description:
** execute.hpp.h
*/
#ifndef EXECUTE_HPP
#define EXECUTE_HPP

namespace nts {
    class execute {
    public:
        execute();
        ~execute();

        bool getEnd(void);

    private:
        bool _end;
    };
}

#endif //EXECUTE_HPP
