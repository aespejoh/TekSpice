/*
** EPITECH PROJECT, 2021
** ComponentException.cpp.cc
** File description:
** ComponentException.cpp.cc
*/

#include "include/exceptions/ComponentException.hpp"

nts::ComponentException::ComponentException() : nts::basicException("Component exception") {}

nts::ComponentException::ComponentException(std::string message) : nts::basicException(message) {}