/*
** EPITECH PROJECT, 2021
** file.cpp.cc
** File description:
** file.cpp.cc
*/

#include "include/fileParser/file.hpp"
#include "exceptions/fileException.hpp"
#include "exceptions/extensionException.hpp"

nts::File::File(std::string filepath) : _filepath{filepath}
{
    checkExtension(filepath);
    std::ifstream file{_filepath};

    if (!file.is_open())
        throw nts::fileException("File does not exist");
    std::stringstream buffer;
    buffer << file.rdbuf();
    _lines = buffer.str();
    _stream = std::stringstream{ _lines };
}

void nts::File::checkExtension(std::string filepath)
{
    int position = filepath.find_last_of('.');
    if (position == 0)
        throw nts::fileException("File does not exist");
    std::string result = filepath.substr(position+1);
    if (result != "nts")
        throw nts::extensionException("This is not the correct extension");

}

bool nts::File::nextLine(std::string &line)
{
    if (!std::getline(_stream, line))
        return false;
    return true;
}