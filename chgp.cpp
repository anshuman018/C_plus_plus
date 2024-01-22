#include <iostream>
#include <vector>
#include <string>

class Character {
public:
    Character(std::string name, int health) : name(name), health(health) {}

    void attack(Character& target) {
        std::cout << name << " attacks " << target.getName() << "!\n";
        // Simplified damage calculation
        int damage = 10;
        target.takeDamage(damage);
    }

    void takeDamage(int damage) {
        health -= damage;
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

    std::string getName() const {
        return name;
    }

    bool isAlive() const {
        return health > 0;
    }

private:
    std::string name;
    int health;
};

class Player : public Character {
public:
    Player(std::string name) : Character(name, 100), experience(0) {}

    void gainExperience(int points) {
        experience += points;
        std::cout << getName() << " gains " << points << " experience points!\n";
    }

private:
    int experience;
};

class Enemy : public Character {
public:
    Enemy(std::string name) : Character(name, 50) {}

    void dropLoot() {
        std::cout << getName() << " drops a health potion!\n";
    }
};

int main() {
    Player player("Hero");
    Enemy enemy("Evil Goblin");

    while (player.isAlive() && enemy.isAlive()) {
        player.attack(enemy);

        if (enemy.isAlive()) {
            enemy.attack(player);
        }
    }

    if (player.isAlive()) {
        player.gainExperience(50);
        std::cout << "Congratulations! " << player.getName() << " defeated " << enemy.getName() << "!\n";
        enemy.dropLoot();
    } else {
        std::cout << "Game over. " << player.getName() << " was defeated by " << enemy.getName() << ".\n";
    }

    return 0;
}
