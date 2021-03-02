/*
** EPITECH PROJECT, 2021
** executeException.hpp.h
** File description:
** executeException.hpp.h
*/
#ifndef EXECUTEEXCEPTION_HPP
#define EXECUTEEXCEPTION_HPP

#include "basicException.hpp"

namespace nts {
    class executeException : public nts::basicException {
    public:
        executeException();
        executeException(std::string message);
    };
}

#endif //NANOTEKSPICE_EXECUTEEXCEPTION_HPP
