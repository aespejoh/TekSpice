/*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_C4081_HPP
#define BOOTSTRAP_C4081_HPP

#include "include/IComponent.hpp"
#include "include/pinMap.hpp"

namespace nts {
    class C4081 : public IComponent {
        public:
            C4081();
            ~C4081();

        private:
            PinMap *_map;
    };
}
#endif //BOOTSTRAP_C4081_HPP
