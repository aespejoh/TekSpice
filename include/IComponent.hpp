/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_ICOMPONENT_HPP
#define BOOTSTRAP_ICOMPONENT_HPP

#include <iostream>
#include <memory>

namespace nts {
    enum Tristate {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };

    class IComponent {
        public:
        virtual ~IComponent() = 0;
        virtual void simulate(std::size_t tick) = 0;
        virtual nts::Tristate compute(std::size_t pin) = 0;
        virtual void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) = 0;
        virtual void dump() const = 0;
        private:
        std::unique_ptr<nts::IComponent> create4001() const noexcept;
    };
}


#endif //BOOTSTRAP_ICOMPONENT_HPP
