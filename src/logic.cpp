/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/

#include "Tristate.hpp"

nts::Tristate Not(nts::Tristate state)
{
    if (state == nts::TRUE)
        return nts::FALSE;
    else if (state == nts::FALSE)
        return nts::TRUE;
    return nts::UNDEFINED;
}

nts::Tristate and_gate(nts::Tristate state1, nts::Tristate state2)
{
    if (state1 == nts::TRUE and state2 == nts::TRUE)
        return nts::TRUE;
    else if (state1 == nts::FALSE || state2 == nts::FALSE)
        return nts::FALSE;
    return nts::UNDEFINED;
}

nts::Tristate or_gate(nts::Tristate state1, nts::Tristate state2)
{
    if (state1 == nts::TRUE || state2 == nts::TRUE)
        return nts::TRUE;
    else if (state1 == nts::UNDEFINED || state2 == nts::UNDEFINED)
        return nts::UNDEFINED;
    return nts::FALSE;
}

nts::Tristate Nand_gate(nts::Tristate state1, nts::Tristate state2)
{
    return Not(and_gate(state1,state2));
}

nts::Tristate Nor_gate(nts::Tristate state1, nts::Tristate state2)
{
    return Not(or_gate(state1,state2));
}

nts::Tristate Xor_gate(nts::Tristate state1, nts::Tristate state2)
{
    if (state1 == nts::UNDEFINED || state2 == nts::UNDEFINED)
        return nts::UNDEFINED;
    else if (state1 != state2)
        return nts::TRUE;
    return nts::FALSE;
}

nts::Tristate Xnor_gate(nts::Tristate state1, nts::Tristate state2)
{
    return Not(Xor_gate(state1,state2));
}