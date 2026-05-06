//
// Created by agp on 5/6/26.
//
#include "vector.h"
using namespace std;
vector<double> vector_add(vector<double> a, vector<double> b)
{
    vector<double> c(a);
    if (a.size() == b.size())
    {

        for (int i = 0; i < a.size(); i++)
        {
            c[i] = a[i] + b[i];
        }
    }
    return c;
}

vector<double> vector_subtract(vector<double> a, vector<double> b)
{
    vector<double> c(a);
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            c[i] = a[i] - b[i];
        }
    }
    return c;
}

vector<double> vector_multiply(vector<double> a, vector<double> b)
{
    vector<double> c(a);
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            c[i] = a[i] * b[i];
        }
    }
    return c;
}
vector<double> vector_divide(vector<double> a, vector<double> b)
{
    vector<double> c(a);
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            c[i] = a[i] / b[i];
        }
    }
    return c;
}

double vector_dot(vector<double> a, vector<double> b)
{    double c = 0.0;
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            c += a[i] * b[i];
        }
    }
    return c;
}
