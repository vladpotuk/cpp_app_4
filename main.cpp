#include <iostream>
#include <Windows.h>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main() {

    double R1, R2, R3, R0;

    // Введення значень опорів R1, R2 та R3
    std::cout << "Enter R1: ";
    std::cin >> R1;

    std::cout << "Enter R2: ";
    std::cin >> R2;

    std::cout << "Enter R3: ";
    std::cin >> R3;

    // Обчислення опору R0 за формулою
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    
    std::cout << " R0: " << R0 << std::endl;

    return 0;
}