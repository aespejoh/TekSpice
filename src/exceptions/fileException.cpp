/*
** EPITECH PROJECT, 2021
** fileException.cpp.cc
** File description:
** fileException.cpp.cc
*/

#include "include/exceptions/fileException.hpp"

nts::fileException::fileException() : nts::basicException("File exception") {}

nts::fileException::fileException(std::string message) : nts::basicException(message) {}