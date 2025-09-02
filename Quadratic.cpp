#include <iostream>
#include <cmath>

// Prompts the user to enter 3 numbers representing a, b, and c in the quadratic formula, then calculates and prints the roots of a linear equation using said formula.
int main() {
    double a, b, c;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    double root1, root2;

    root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";

}
