#include <iostream>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main() {
    bool is_robot_operational = true; // Whether the robot is operational

    if (is_robot_operational) {
        cout << "The robot is operational." << endl; // Print that the robot is operational
    } else {
        cout << "The robot is not operational." << endl; // Print that the robot is not operational
    }

    return 0; // Return 0 to indicate that the program ended successfully
}