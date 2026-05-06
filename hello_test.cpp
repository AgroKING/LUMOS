//
// Created by agp on 5/7/26.
//
#include <format>
#include <gtest/gtest.h>
#include "vector.h"
using namespace std;
// Demonstrate some basic assertions.
TEST(VectorTest, AddHappyPath) {
    std::vector<double> a        = {1, 2, 3};
    std::vector<double> b        = {4, 5, 6};
    std::vector<double> expected = {5, 7, 9};
    EXPECT_EQ(vector_add(a, b), expected);
}
TEST(VectorTest, SubtractHappyPath) {
    std::vector<double> a        = {2, 3, 1};
    std::vector<double> b        = {1, 2, 3};
    std::vector<double> expected = {1, 1, -2};
    EXPECT_EQ(vector_subtract(a, b), expected);
}
TEST(VectorTest, DotProduct) {
    std::vector<double> a = {1, 2, 3};
    std::vector<double> b = {4, 5, 6};
    // 1*4 + 2*5 + 3*6 = 32
    EXPECT_DOUBLE_EQ(vector_dot(a, b), 32.0);
}
TEST(VectorTest, AddShapeMismatch) {
    std::vector<double> a = {1, 2, 3};
    std::vector<double> b = {1, 2};
    EXPECT_THROW(vector_add(a, b), std::invalid_argument);
}
TEST(VectorTest, AddEmptyVectors) {
    std::vector<double> a = {};
    std::vector<double> b = {};
    std::vector<double> expected = {};
    EXPECT_EQ(vector_add(a, b), expected);
}