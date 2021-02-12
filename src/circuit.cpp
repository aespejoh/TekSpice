/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#include <circuit.hpp>

std::unique_ptr<nts::IComponent> nts::Circuit::create4081() const noexcept
{
    return std::make_unique<C4081>();
}

std::unique_ptr<nts::IComponent> nts::Circuit::createComponent(
    const std::string &type
)
{
    if (type == "4081")
        return create4081();
}

void nts::Circuit::simulate(std::size_t tick)
{
}

nts::Tristate nts::Circuit::compute(std::size_t pin)
{
    return FALSE;
}

void nts::Circuit::setLink(std::size_t pin, nts::IComponent &other,
    std::size_t otherPin
)
{
}

void nts::Circuit::dump() const
{
}

nts::Circuit::~Circuit()
= default;

