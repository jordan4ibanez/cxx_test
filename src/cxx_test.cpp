#include "entity/entity.hpp"
#include "logic/game_logic.hpp"
#include <iostream>
#include <memory>
#include <print>
#include <string>
#include <unordered_map>

#define PROJECT_NAME "cxx_test"

int main(int argc, char **argv) {
    std::println("----- Printing arguments -----");
    for (int i = 0; i < argc; i++) {
        std::println("[{}] [{}]", i, argv[i]);
    }
    std::println("----- Done printing arguments -----");

    std::unique_ptr<Game::GameLogic> game = std::make_unique<Game::GameLogic>();

    game->run();



    // std::unique_ptr<Game::Entity> ent = std::make_unique<Game::Entity>();
    // std::println("{}", ent->getHP());

    // std::unordered_map<std::string, Game::Entity> database;

    // std::string command;

    // std::cout << "Input command: ";
    // std::cin >> command;
    // std::cout << command << std::endl;

    std::println("----- END OF MAIN -----");
    return 0;
}
