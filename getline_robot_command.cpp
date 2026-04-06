#include<iostream>
#include<string>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main(){
    string command; // Variable to store the robot command
    cout << "Enter a command for the robot: "; // Prompt the user to enter a command
    getline(cin, command); // Read the command from user input

    cout << "You entered the command: " << command << endl; // Print the entered command
    return 0; // Return 0 to indicate that the program ended successfully
}