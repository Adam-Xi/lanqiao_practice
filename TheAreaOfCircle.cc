#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radius;
    double result, PI;
    cin >> radius;
    PI = atan(1.0) * 4;
    result = PI * radius * radius;
    printf("%.7lf", result);

    return 0;
}

