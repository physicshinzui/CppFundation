#include <iostream> 

int main() {
    char play_game {};
    do {
        std::cout << "Do you want to start a game? [y/n]" << std::endl;
        std::cin >> play_game;
    } while(play_game == 'n' || play_game == 'N');
    std::cout << "You've started it!" << std::endl;
}