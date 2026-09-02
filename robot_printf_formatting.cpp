#include<cstdio>
int main() {
    int distance_to_goal = 100; // Distance to the goal in meters
    float speed = 10.0; // Speed in meters per second
    char direction = 'N'; // Direction of movement (N, S, E, W)
    bool goal_reached = false; // Whether the goal has been reached

    printf("Distance to goal: %d meters\n", distance_to_goal); // Print the distance to the goal
    printf("Speed: %.2f m/s\n", speed); // Print the speed in m/s with 2 decimal places
    printf("Direction: %c\n", direction); // Print the direction of movement
    printf("Goal reached: %s\n", goal_reached ? "Yes" : "No"); // Print whether the goal has been reached
    return 0; // Return 0 to indicate that the program ended successfully
}