#pragma once

#include <cstdint>
#include <print>
#include <string>

namespace Game {

    class Entity {
      public:
        Entity();

        ~Entity();

        int getHP();

        Entity *setHP(int32_t hp);

        std::string getName();

        Entity *setName(std::string name);

      private:
        int32_t hp = 20;
        uint64_t uuid = 0;
        std::string name = "";
    };

} // namespace Game