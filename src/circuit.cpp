/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include <circuit.hpp>

nts::Circuit::~Circuit()
= default;

void nts::Circuit::addComponent(nts::IComponent* component)
{
    _circuit.push_back(component);
}
