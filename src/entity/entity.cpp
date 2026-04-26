#include "entity.hpp"
#include <print>

namespace Game {

    Entity::Entity() {
        std::println("A new entity exists.");
    }

    Entity::Entity(int hp) : hp(hp) {
        std::println("A new entity exists with hp {}.", this->hp);
    }

    Entity::~Entity() {
        std::println("An entity has despawned.");
    }

    int Entity::getHP() {
        return this->hp;
    }

} // namespace Game