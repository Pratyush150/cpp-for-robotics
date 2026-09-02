#include<iostream>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

const float max_speed = 10.0; // Maximum speed of the robot in meters per second

int main(){
    float current_speed = 12.0; // Current speed of the robot in meters per second
    if (current_speed > max_speed) {
        cout << "Warning: Current speed exceeds maximum speed!" << endl; // Print a warning if the current speed exceeds the maximum speed
    } else {
        cout << "Current speed is within the safe limit." << endl; // Print that the current speed is within the safe limit
    }
    return 0; // Return 0 to indicate that the program ended successfully
}