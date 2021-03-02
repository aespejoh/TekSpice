/*
** EPITECH PROJECT, 2021
** executeException.cpp.cc
** File description:
** executeException.cpp.cc
*/

#include "include/exceptions/executeException.hpp"

nts::executeException::executeException() : nts::basicException("Execute exception") {}

nts::executeException::executeException(std::string message) : nts::basicException(message) {}