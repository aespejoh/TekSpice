/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/

#include "circuitFactory.hpp"
#include "exceptions/ComponentException.hpp"
#include <algorithm>

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createComponent(
    const std::string &type
)
{
    auto it = _command_list.find(type);
    if (it == _command_list.end())
        throw ComponentException("Component does not exist");
    return (this->*it->second)();
}

nts::CircuitFactory::CircuitFactory()
{
    _command_list.insert(std::make_pair("input", &CircuitFactory::createInput));
    _command_list.insert(std::make_pair("output", &CircuitFactory::createOutput));
    _command_list.insert(std::make_pair("4081", &CircuitFactory::create4081));
    _command_list.insert(std::make_pair("4001", &CircuitFactory::create4001));
    _command_list.insert(std::make_pair("clock", &CircuitFactory::createClock));
    _command_list.insert(std::make_pair("4030", &CircuitFactory::create4030));
    _command_list.insert(std::make_pair("4069", &CircuitFactory::create4069));
    _command_list.insert(std::make_pair("4071", &CircuitFactory::create4071));
    _command_list.insert(std::make_pair("true", &CircuitFactory::createTrue));
    _command_list.insert(std::make_pair("false", &CircuitFactory::createFalse));
    _command_list.insert(std::make_pair("4011", &CircuitFactory::create4011));
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4081()
{
    return std::make_unique<C4081>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4001()
{
    return std::make_unique<C4001>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createInput()
{
    return std::make_unique<Input>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createOutput()
{
    return std::make_unique<Output>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createClock()
{
    return std::make_unique<Clock>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4030()
{
    return std::make_unique<C4030>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4069()
{
    return std::make_unique<C4069>();

}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4071()
{
    return std::make_unique<C4071>();

}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createTrue()
{
    return std::make_unique<True>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::createFalse()
{
    return std::make_unique<False>();
}

std::unique_ptr<nts::IComponent> nts::CircuitFactory::create4011()
{
    return std::make_unique<C4011>();
}
