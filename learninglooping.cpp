#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>


int main() {

    int poisonduration = 20;
    int poisondamage = 5;
    int health = 100;
    // Checks the activated value
    std::string activated = "false";

    //Makes it so the users input changes the boolean
    std::cin >> activated;

    if (activated == "true") {
        for (int i = 0; i < poisonduration; i++) {
            // Damage System
            health -= poisondamage;
            std::cout << health << std::endl;
            // Wait two seconds
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    }

    // End System
    if (health <= 0) {
        std::cout << "The poison has ended the person.";
    }
    return 0;
}