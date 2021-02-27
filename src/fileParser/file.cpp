/*
** EPITECH PROJECT, 2021
** file.cpp.cc
** File description:
** file.cpp.cc
*/

#include "include/fileParser/file.hpp"
#include "exceptions/fileException.hpp"

nts::File::File(std::string filepath)
{
    _filepath = filepath;

    std::ifstream file{_filepath};

    if (!file.is_open())
        throw nts::fileException("File not opened");
        //std::cout << "Could not open File";
    std::stringstream buffer;
    buffer << file.rdbuf();
    _lines = buffer.str();
    _stream = std::stringstream{ _lines };
}

bool nts::File::nextLine(std::string &line)
{
    if (!std::getline(_stream, line)) {
        return false;
    }
    return true;
}