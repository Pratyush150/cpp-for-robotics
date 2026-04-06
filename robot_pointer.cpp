#include <iostream>
using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object 

int main(){
    int roboat_id = 43;
    int* pointer_to_robot_id = &roboat_id; // Create a pointer to the robot ID variable
    cout << "The robot ID is: " << *pointer_to_robot_id << endl; // Print the value pointed to by the pointer (the robot ID)
    cout << "The memory address of the robot ID is: " << pointer_to_robot_id << endl; // Print the memory address stored in the pointer
    cout << "The memory address of the robot ID variable is: " << &roboat_id << endl; // Print the memory address of the robot ID variable
    return 0; // Return 0 to indicate that the program ended successfully
}