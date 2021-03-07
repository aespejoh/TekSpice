/*
** EPITECH PROJECT, 2021
** ComponentException.hpp.h
** File description:
** ComponentException.hpp.h
*/
#ifndef NANOTEKSPICE_COMPONENTEXCEPTION_HPP
#define NANOTEKSPICE_COMPONENTEXCEPTION_HPP

#include "basicException.hpp"

namespace nts {
    class ComponentException : public nts::basicException {
    public:
        ComponentException();
        ComponentException(std::string message);
    };
}

#endif //NANOTEKSPICE_COMPONENTEXCEPTION_HPP
