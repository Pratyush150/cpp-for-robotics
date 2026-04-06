#include<iostream>
#include<string>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object


int main(){
    double robot_speed;
    cout << "Enter the robot's speed in meters per second: "; // Prompt the user to enter the robot's speed
    cin >> robot_speed; // Read the robot's speed from user input

    if(robot_speed < 0) {
        cout << "Error: Speed cannot be negative." << endl; // Print an error message if the speed is negative
    } else if (robot_speed == 0) {
        cout << "The robot is stationary." << endl; // Print that the robot is stationary if the speed is zero
    } else {
        cout << "The robot is moving at " << robot_speed << " m/s." << endl; // Print the robot's speed if it is positive
    }
    return 0; // Return 0 to indicate that the program ended successfully
}