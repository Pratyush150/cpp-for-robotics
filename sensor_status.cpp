#include<iostream>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

bool is_sensor_active = true; // Whether the sensor is active

void check_sensor_status() {
    if (is_sensor_active) {
        cout << "The sensor is active." << endl; // Print that the sensor is active
    } else {
        cout << "The sensor is inactive." << endl; // Print that the sensor is inactive
    }
}

int main() {
    check_sensor_status(); // Check and print the sensor status

    
    return 0; // Return 0 to indicate that the program ended successfully
}