#include<iostream>
#include<sstream> // Include the sstream library for string stream operations   
#include<string> // Include the string library for using std::string
using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

int main(){
    int distance_to_goal = 100; // Distance to the goal in meters
    float speed = 10.0; // Speed in meters per second
    char direction = 'N'; // Direction of movement (N, S, E, W)
    bool goal_reached = false; // Whether the goal has been reached

    stringstream ss; // Create a stringstream object
    ss << "Distance to goal: " << distance_to_goal << " meters\n"; // Add distance information to the stringstream
    ss << "Speed: " << speed << " m/s\n"; // Add speed information to the stringstream
    ss << "Direction: " << direction << "\n"; // Add direction information to the stringstream
    ss << "Goal reached: " << (goal_reached ? "Yes" : "No") << "\n"; // Add goal reached information to the stringstream

    string output = ss.str(); // Convert the stringstream to a string
    cout << output; // Print the output string
    return 0; // Return 0 to indicate that the program ended successfully
}