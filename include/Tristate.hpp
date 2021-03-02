/*
** EPITECH PROJECT, 2021
** Tristate.hpp.h
** File description:
** Tristate.hpp.h
*/
#ifndef NANOTEKSPICE_TRISTATE_HPP
#define NANOTEKSPICE_TRISTATE_HPP

namespace nts {
    enum Tristate {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };
}

#endif //NANOTEKSPICE_TRISTATE_HPP
