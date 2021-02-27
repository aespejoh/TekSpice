/*
** EPITECH PROJECT, 2021
** basicException.cpp.cc
** File description:
** basicException.cpp.cc
*/

#include "include/exceptions/basicException.hpp"

nts::basicException::basicException()
{
    _message = "Basic exception";
}

nts::basicException::basicException(std::string message)
{
    _message = message;
}

nts::basicException::~basicException()
{

}

const char * nts::basicException::what() const noexcept
{
    return _message.c_str();
}