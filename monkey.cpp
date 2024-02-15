#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void monkeyDance(std::vector<char>& monkeys, int timeSteps) {
    int n = monkeys.size();
    std::srand(std::time(0));

    for (int step = 0; step < timeSteps; ++step) {
        int randomIndex = std::rand() % (n - 1);
        std::swap(monkeys[randomIndex], monkeys[randomIndex + 1]);

        for (char monkey : monkeys) {
            std::cout << monkey << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numMonkeys = 10;
    int timeSteps = 20;

    std::vector<char> monkeys(numMonkeys);
    for (int i = 0; i < numMonkeys; ++i) {
        monkeys[i] = 'A' + i;
    }

    for (char monkey : monkeys) {
        std::cout << monkey << " ";
    }
    std::cout << std::endl;

    std::cout << "Monkey Dance Simulation:" << std::endl;
    monkeyDance(monkeys, timeSteps);

    return 0;
}
