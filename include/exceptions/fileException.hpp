/*
** EPITECH PROJECT, 2021
** fileException.hpp.h
** File description:
** fileException.hpp.h
*/
#ifndef NANOTEKSPICE_FILEEXCEPTION_HPP
#define NANOTEKSPICE_FILEEXCEPTION_HPP

#include "basicException.hpp"

namespace nts {
    class fileException : public nts::basicException {
    public:
        fileException();
        fileException(std::string message);
    };
}

#endif //NANOTEKSPICE_FILEEXCEPTION_HPP
