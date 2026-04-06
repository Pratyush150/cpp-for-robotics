#include<iostream>
using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main(){
    int sensor_value = 100; // Sensor value in some units
    double voltage; // Voltage corresponding to the sensor value

    voltage = sensor_value * 5.0/1023;
    cout << "The voltage corresponding to the sensor value " << sensor_value << " is " << voltage << " volts." << endl; // Print the voltage corresponding to the sensor value

    voltage = double(sensor_value) * 5.0/1023; // Explicitly cast sensor_value to double before performing the calculation
    cout << "The voltage corresponding to the sensor value " << sensor_value << " (using explicit type casting) is " << voltage << " volts." << endl; // Print the voltage corresponding

    voltage = static_cast<double>(sensor_value) * 5.0/1023; // Use static_cast to convert sensor_value to double before performing the calculation
    cout << "The voltage corresponding to the sensor value " << sensor_value << " (using static_cast) is " << voltage << " volts." << endl; // Print the voltage corresponding to the sensor value
    return 0; // Return 0 to indicate that the program ended successfully
}