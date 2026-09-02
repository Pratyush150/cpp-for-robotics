#include <iostream>

int main(){
    double robot_speed = 5.0; // Speed in meters per second
    double time = 10.0; // Time in seconds
    double distance = robot_speed * time; // Distance in meters
    std::cout << "The robot traveled " << distance << " meters." << std::endl;
    return 0;

}