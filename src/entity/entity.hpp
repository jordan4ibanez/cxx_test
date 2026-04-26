#pragma once

#include <print>

namespace Game {

    class Entity {
      public:
        Entity();

        Entity(int hp);

        ~Entity();

        int getHP();

      private:
        int hp = 20;
    };

} // namespace Game