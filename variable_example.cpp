#include <iostream>

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main(){
    int distance_to_goal = 100; // Distance to the goal in meters
    float speed = 10.0; // Speed in meters per second
    float speed_in_kmh = speed * 3.6; // Convert speed to kilometers per hour
    char direction = 'N'; // Direction of movement (N, S, E, W)
    bool goal_reached = false; // Whether the goal has been reached
    cout << "Distance to goal: " << distance_to_goal << " meters" << endl; // Print the distance to the goal
    cout << "Speed: " << speed << " m/s (" << speed_in_kmh << " km/h)" << endl; // Print the speed in m/s and km/h
    cout << "Direction: " << direction << endl; // Print the direction of movement
    cout << "Goal reached: " << (goal_reached ? "Yes" : "No") << endl; // Print whether the goal has been reached
    return 0; // Return 0 to indicate that the program ended successfully
}