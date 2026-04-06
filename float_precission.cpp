#include<iostream>

#include<iomanip> // Include the iomanip library for setting precision

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main(){
    float battery_voltage = 3.14159265; // Value of battery_voltage with high precision
    cout << "Battery voltage with default precision: " << battery_voltage << endl; // Print battery_voltage with default precision
    cout << "Battery voltage with 2 decimal places: " << fixed << setprecision(2) << battery_voltage << endl; // Print battery_voltage with 2 decimal places
    cout << "Battery voltage with 7 decimal places: " << fixed << setprecision(7) << battery_voltage << endl; // Print battery_voltage with 7 decimal places
    return 0; // Return 0 to indicate that the program ended successfully
}