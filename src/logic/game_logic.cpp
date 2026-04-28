#include "game_logic.hpp"
#include <boost/algorithm/string.hpp>
#include <csignal>
#include <cstdint>
#include <iostream>
#include <print>


namespace Game {

    void signalHandling(int32_t signal) {
        std::println("\nSIGNAL: {}", signal);
        if (signal == SIGINT) {
            GameLogic::getInstance()->exit();
        }
        std::exit(signal);
    }

    GameLogic *GameLogic::instance = nullptr;

    void GameLogic::run() {
        setUpCatch();

        while (this->shouldRun) {
            printPrompt();
            intakeData();
            commandProcess();
        }
    }

    void GameLogic::exit() {
        this->shouldRun = false;
        std::println("\nThanks for playing!");
    }

    GameLogic *GameLogic::getInstance() {
        if (GameLogic::instance == nullptr) {
            instance = new GameLogic();
        }
        return instance;
    }

    GameLogic::GameLogic() {
        std::println("Game started.");
    }

    void GameLogic::setUpCatch() {
        std::signal(SIGINT, signalHandling);
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

} // namespace Game
