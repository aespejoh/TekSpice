/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/

#include "Tristate.hpp"

nts::Tristate and_gate(nts::Tristate state1, nts::Tristate state2)
{
    if (state1 == nts::TRUE and state2 == nts::TRUE)
        return nts::TRUE;
    else if (state1 == nts::FALSE || state2 == nts::FALSE)
        return nts::FALSE;
    return nts::UNDEFINED;
}