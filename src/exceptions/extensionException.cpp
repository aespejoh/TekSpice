/*
** EPITECH PROJECT, 2021
** extensionException.cpp.cc
** File description:
** extensionException.cpp.cc
*/

#include "include/exceptions/extensionException.hpp"

nts::extensionException::extensionException() : nts::basicException("Extension Error") {}

nts::extensionException::extensionException(std::string message) : nts::basicException(message) {}