/*
** EPITECH PROJECT, 2021
** nanoTekSpice
** File description:
** Created by aespejo,
*/
#ifndef NANOTEKSPICE_LOGIC_HPP
#define NANOTEKSPICE_LOGIC_HPP

nts::Tristate and_gate(nts::Tristate state1, nts::Tristate state2);
nts::Tristate Not(nts::Tristate state);
nts::Tristate or_gate(nts::Tristate state1, nts::Tristate state2);
nts::Tristate Nand_gate(nts::Tristate state1, nts::Tristate state2);
nts::Tristate Nor_gate(nts::Tristate state1, nts::Tristate state2);
nts::Tristate Xor_gate(nts::Tristate state1, nts::Tristate state2);
nts::Tristate Xnor_gate(nts::Tristate state1, nts::Tristate state2);

#endif //NANOTEKSPICE_LOGIC_HPP
