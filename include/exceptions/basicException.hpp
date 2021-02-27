/*
** EPITECH PROJECT, 2021
** basicException.hpp.h
** File description:
** basicException.hpp.h
*/
#ifndef NANOTEKSPICE_BASICEXCEPTION_HPP
#define NANOTEKSPICE_BASICEXCEPTION_HPP

#include <iostream>
#include <exception>

namespace nts {
    class basicException : public std::exception {
    public:
        basicException();
        basicException(std::string message);
        ~basicException();
        const char *what() const noexcept;

    private:
        std::string _message;
    };
}

#endif //NANOTEKSPICE_BASICEXCEPTION_HPP
