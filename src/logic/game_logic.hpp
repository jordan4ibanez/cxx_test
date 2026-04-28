#pragma once

#include <string>

namespace Game {
    class GameLogic {
      public:
        GameLogic();

        void run();

      private:
        bool shouldRun = true;
        std::string data;

        void printPrompt();

        void intakeData();

        void commandProcess();

        bool isCommand(std::string toCompare);

        void exit();
    };
} // namespace Game
