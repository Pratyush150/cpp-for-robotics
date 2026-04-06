#include <iostream>
using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library object

class RobotController {
public:
    RobotController() {
        cout << "RobotController created." << endl; // Print a message when the RobotController is created
    }

    ~RobotController() {
        cout << "RobotController destroyed." << endl; // Print a message when the RobotController is destroyed
    }

    void control() {
        cout << "Controlling the robot..." << endl; // Print a message when controlling the robot
    }
};

int main() {
    
        RobotController controller; // Create an instance of RobotController
        controller.control(); // Call the control method to simulate controlling the robot
     // The controller goes out of scope here, and its destructor is called

        return 0; // Return 0 to indicate that the program ended successfully
}