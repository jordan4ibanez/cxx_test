#pragma once

#include <string>

// Singleton.

namespace Game {
    class GameLogic final {
      public:
        void run();

        void exit();

        static GameLogic *getInstance();

        // Disable copy constructor.
        GameLogic(const GameLogic &obj) = delete;

      private:
        GameLogic();

        static GameLogic *instance;

        bool shouldRun = true;
        std::string data;

        void setUpCatch();

        void printPrompt();

        void intakeData();

        void commandProcess();

        bool isCommand(std::string toCompare);
    };
} // namespace Game
