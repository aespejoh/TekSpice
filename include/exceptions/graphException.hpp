/*
** EPITECH PROJECT, 2021
** graphException.hpp.h
** File description:
** graphException.hpp.h
*/
#ifndef GRAPHEXCEPTION_HPP
#define GRAPHEXCEPTION_HPP

#include "basicException.hpp"

namespace nts {
    class graphException : public nts::basicException {
    public:
        graphException();
        graphException(std::string message);
    };
}

#endif //NANOTEKSPICE_GRAPHEXCEPTION_HPP
