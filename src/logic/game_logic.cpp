#include "game_logic.hpp"

#include <iostream>
#include <print>

namespace Game {
    GameLogic::GameLogic() {
        std::println("Game started.");
    }

    void GameLogic::run() {
        while (this->shouldRun) {
            printPrompt();
            intakeData();

            if (this->data.length() == 0) {
                exit();
            }
        }
    }

    void GameLogic::printPrompt() {
        std::print("What would you like to do? ");
    }

    void GameLogic::intakeData() {
        this->data.clear();
        std::cin >> this->data;
    }

    void GameLogic::exit() {
        this->shouldRun = false;
        std::println("\nThanks for playing!");
    }
} // namespace Game
