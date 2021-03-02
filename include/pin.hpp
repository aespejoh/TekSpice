/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_PIN_HPP
#define BOOTSTRAP_PIN_HPP

#include "Tristate.hpp"

namespace nts {
    class Pin {
        public:
        enum Type {
            U,
            I,
            O
        };
            Pin(Type, Tristate);
            Pin();
            ~Pin() = default;
            Type getType() const;
            void setType(Type type);
            Tristate getState();
            void setState(Tristate);
        private:
            Type _type;
            Tristate _state;
    };
}
#endif //BOOTSTRAP_PIN_HPP
