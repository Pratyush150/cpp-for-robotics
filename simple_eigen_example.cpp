#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    Eigen::Vector3d v(1.0, 2.0, 3.0); // Create a 3D vector
    std::cout << "The vector v is:\n" << v << std::endl; // Print the vector
    return 0;
}
