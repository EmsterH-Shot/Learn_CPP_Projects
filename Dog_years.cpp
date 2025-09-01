// Originally made in September 2023, updated in September 2025 to reflect Benji's age right before his passing.

#include <iostream>

int main() {
  // Benji, my dog, almost made it to 17 years old, so I'm both declaring the int dog_age variable and initializing it as 17 years:
int dog_age = 17;

int early_years, later_years, human_years;
  // The first 2 years of a dog's life are equal to 21 in human years:
 early_years = 21;

// The following years after 1-2 are equal to 4 human years:
later_years = (dog_age - 2) * 4;

// This will give us Benji's age in human years:
human_years = early_years + later_years;

// Prints: "My name is Benji! Ruff ruff, I am 81 in human years."
std::cout << "My name is Benji! Ruff ruff, I am " << human_years << " in human years.";

}
