#include "game_logic.hpp"

#include <boost/algorithm/string.hpp>
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
            commandProcess();
        }
    }

    void GameLogic::printPrompt() {
        std::print("What would you like to do? ");
    }

    void GameLogic::intakeData() {
        this->data.clear();
        std::cin >> this->data;
        boost::trim(this->data);
        boost::to_lower(this->data);
    }

    void GameLogic::commandProcess() {
        if (this->data.length() == 0 || isCommand("exit") ||
            isCommand("quit")) {
            exit();
        } else if (isCommand("create")) {
            std::println("create a creation function somehow");
        }
    }

    bool GameLogic::isCommand(std::string toCompare) {
        return this->data.compare(toCompare) == 0;
    }

    void GameLogic::exit() {
        this->shouldRun = false;
        std::println("\nThanks for playing!");
    }
} // namespace Game
