//
// Created by agp on 5/6/26.
//

#ifndef LUMOS_VECTOR_H
#define LUMOS_VECTOR_H
#include <vector>
///  Perform math directly on vectors!

//using namespace std;
/// @brief  vector_add adds the given vectors!
/// @param a the first vector
///  @param b the second vector
/// @return  the sum of the two vectors
/// @throws std::invalid_argument vectors must be of same size
std::vector<double> vector_add(std::vector<double> & a, std::vector<double> &b);
/// @brief  vector_subtract adds the given vectors!
/// @param a the first vector
///  @param b the second vector
/// @return  the difference of the two vectors
/// @throws std::invalid_argument vectors must be of same size
std::vector<double> vector_subtract(std::vector<double> & a, std::vector<double> & b);

/// @brief  vector_divide adds the given vectors!
/// @param a the dividend vector
///  @param b the divisor vector
/// @return  the division of the two vectors
/// @throws std::invalid_argument vectors must be of same sizestd::vector<double> vector_multiply(std::vector<double> &a, std::vector<double> &b);
std::vector<double> vector_divide(std::vector<double> &a, std::vector<double> &b);
/// @brief  vector_dot adds the given vectors!
/// @param a the first vector
///  @param b the second vector
/// @return  the dot product of the two vectors
/// @throws std::invalid_argument vectors must be of same size
double vector_dot(std::vector<double> &a, std::vector<double> &b);
//vector<double> vector_cross(vector<double> a, vector<double> b);



#endif //LUMOS_VECTOR_H
