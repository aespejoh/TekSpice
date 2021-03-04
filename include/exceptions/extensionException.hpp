/*
** EPITECH PROJECT, 2021
** extensionException.hpp.h
** File description:
** extensionException.hpp.h
*/
#ifndef NANOTEKSPICE_EXTENSIONEXCEPTION_HPP
#define NANOTEKSPICE_EXTENSIONEXCEPTION_HPP

#include "basicException.hpp"

namespace nts {
    class extensionException : public nts::basicException {
    public:
        extensionException();
        extensionException(std::string message);
    };
}

#endif //NANOTEKSPICE_EXTENSIONEXCEPTION_HPP
