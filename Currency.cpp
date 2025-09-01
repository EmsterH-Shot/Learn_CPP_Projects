#include <iostream>

// Converts value given by user from CAD to USD. 
int main() {
 double cad;
 double dollars;

 std::cout << "Enter number of Canadian Dollars: ";
 std::cin >> cad;

 // CAD conversion rate: .73
 dollars = .73 * cad;

 std::cout << "Total USD = $" << dollars << "\n";

}
