/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_PIN_HPP
#define BOOTSTRAP_PIN_HPP

#include "IComponent.hpp"

namespace nts {
    class Pin {
        public:
        enum Type {
            U,
            I,
            O
        };
            Pin(Type, Tristate, IComponent*);
            Pin();
            ~Pin() = default;
            void setComponent(IComponent&);
            void setState(Tristate);
            Type getType() const;
            void setType(Type type);
        private:
            Type _type;
            Tristate _state;
            IComponent *_component;
    };
}
#endif //BOOTSTRAP_PIN_HPP
