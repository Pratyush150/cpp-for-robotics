#include <iostream>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object
int main(){
    string robot_status = "active"; // Status of the robot
    int x_position = 10; // X position of the robot
    int y_position = 20; // Y position of the robot

    cout << "The robot is currently " << robot_status << " at position (" << x_position << ", " << y_position << ")." << endl; // Print the robot's status and position
    return 0; // Return 0 to indicate that the program ended successfully
}