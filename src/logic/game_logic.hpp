#pragma once

#include <string>

namespace Game {
    class GameLogic {
      public:
        GameLogic();

        void run();

        void printPrompt();

        void intakeData();

        void exit();

      private:
        bool shouldRun = true;
        std::string data;
    };
} // namespace Game
