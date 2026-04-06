#include <iostream>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main(){
    string robot_name = "Robo1"; // Name of the robot
    int robot_battery_level = 80; // Battery level in percentage
    cout << "The robot " << robot_name << " has a battery level of " << robot_battery_level << "%." << endl; // Print the robot's name and battery level
    return 0; // Return 0 to indicate that the program ended successfully
}