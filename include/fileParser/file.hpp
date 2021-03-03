/*
** EPITECH PROJECT, 2021
** file.hpp.h
** File description:
** file.hpp.h
*/
#ifndef NANOTEKSPICE_FILE_HPP
#define NANOTEKSPICE_FILE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

namespace nts {
    class File {
    public:
        explicit File(std::string filepath);

        bool nextLine(std::string &line);
        void checkExtension(std::string filepath);
    private:
        std::string _filepath;
        std::string _lines;
        std::stringstream _stream;
    };
}

#endif //NANOTEKSPICE_FILE_HPP
