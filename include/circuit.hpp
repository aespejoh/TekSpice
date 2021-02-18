    /*
** EPITECH PROJECT, 2021
** bootstrap
** File description:
** Created by aespejo,
*/
#ifndef BOOTSTRAP_CIRCUIT_HPP
#define BOOTSTRAP_CIRCUIT_HPP

#include "IComponent.hpp"
#include <vector>

namespace nts {
    class Circuit {
        public:
        ~Circuit();
        void addComponent(IComponent*);
        private:
            std::vector<IComponent*> _circuit;
    };
}
#endif //BOOTSTRAP_CIRCUIT_HPP
