//
// Created by agp on 5/6/26.
//

#ifndef LUMOS_VECTOR_H
#define LUMOS_VECTOR_H
#include <vector>

//using namespace std;
std::vector<double> vector_add(std::vector<double> & a, std::vector<double> &b);
std::vector<double> vector_subtract(std::vector<double> & a, std::vector<double> & b);
std::vector<double> vector_multiply(std::vector<double> &a, std::vector<double> &b);
std::vector<double> vector_divide(std::vector<double> &a, std::vector<double> &b);
double vector_dot(std::vector<double> &a, std::vector<double> &b);
//vector<double> vector_cross(vector<double> a, vector<double> b);



#endif //LUMOS_VECTOR_H
