#include <iostream>
#include <stdexcept> // Include the standard library for exception handling

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero is not allowed."); // Throw an exception if the denominator is zero
    }
    return numerator / denominator; // Return the result of the division
}   

int main() {
    double num, denom;
    cout << "Enter the numerator: "; // Prompt the user to enter the numerator
    cin >> num; // Read the numerator from user input
    cout << "Enter the denominator: "; // Prompt the user to enter the denominator
    cin >> denom; // Read the denominator from user input

    try {
        double result = divide(num, denom); // Attempt to perform the division
        cout << "The result of " << num << " / " << denom << " is: " << result << endl; // Print the result of the division
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl; // Catch and print any runtime errors that occur during division
    }

    return 0; // Return 0 to indicate that the program ended successfully
}