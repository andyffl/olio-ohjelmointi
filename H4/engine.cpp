#include "engine.h"

Engine::Engine(int hp, double disp) {
    horsepower = hp;
    displacement = disp;
}

int Engine::getHorsepower() const {
    return horsepower;
}

double Engine::getDisplacement() const {
    return displacement;
}

void Engine::setHorsepower(int newHorsepower) {
    horsepower = newHorsepower;
}

void Engine::setDisplacement(double newDisplacement) {
    displacement = newDisplacement;
}

Engine::Engine() {}
