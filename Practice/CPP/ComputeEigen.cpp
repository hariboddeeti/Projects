#include<iostream>
#include<Eigen/Dense>

int main() {
    Eigen::Matrix3f A;
    A << 2, 0, 0,
         0, 3, 1,
         0, 1, 3;

    Eigen::EigenSolver<Eigen::Matrix3f> solver(A);

    Eigen::VectorXf eigenvalues = solver.eigenvalues().real();
    Eigen::MatrixXf eigenVectors = solver.eigenvectors().real();

    std::cout << "Eigenvalues:\n" << eigenvalues << std::endl;
    std::cout << "Eigenvectors:\n" << eigenVectors << std::endl;
    return 0;
}