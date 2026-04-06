#include<iostream>
#include<vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5}; // Create a vector of integers
    std::cout << "The numbers in the vector are: "; // Print a message
    for (const auto& num : numbers) { // Loop through each number in the vector
        std::cout << num << " "; // Print the current number followed by a space
    }
    std::cout << std::endl; // Print a newline at the end
    return 0; // Return 0 to indicate that the program ended successfully
}