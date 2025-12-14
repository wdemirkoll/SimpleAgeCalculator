#include <iostream>

// This function prints the user's age
void FunctionAge(int age) {
    std::cout << "Your age: " << age << std::endl;
}

int main() {
    int CurrentYear = 2025;   // Stores the current year
    int YearOfBirth;         // Variable to store user's birth year
    int age;                // Variable to store calculated age

    // Ask the user to enter their year of birth
    std::cout << "Enter your date of birth: ";
    std::cin >> YearOfBirth;

    // Calculate age by subtracting birth year from current year
    age = CurrentYear - YearOfBirth;

    // Call the function to display the age
    FunctionAge(age);

    return 0; // Program ends successfully
}
