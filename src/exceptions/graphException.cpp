/*
** EPITECH PROJECT, 2021
** graphException.cpp.cc
** File description:
** graphException.cpp.cc
*/

#include "include/exceptions/graphException.hpp"

nts::graphException::graphException() : nts::basicException("Graph Excpetion") {}

nts::graphException::graphException(std::string message) :nts::basicException(message) {}