#include "entity.hpp"
#include "src/uuid/uuid.hpp"
#include <print>

namespace Game {

    Entity::Entity() {
        this->uuid = uuid::get();

        std::println("A new entity exists. UUID: {}", this->uuid);
    }

    Entity::~Entity() {
        std::println("An entity has despawned.");
    }

    int Entity::getHP() {
        return this->hp;
    }

    Entity *Entity::setHP(int32_t hp) {
        this->hp = hp;
        return this;
    }

    std::string Entity::getName() {
        return this->name;
    }

    Entity *Entity::setName(std::string name) {
        this->name = name;
        return this;
    }

} // namespace Game