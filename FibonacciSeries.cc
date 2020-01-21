#include <iostream>
using namespace std;

int Fibobacci(int num)
{
    if(num <= 2)
    {
        return 1;
    }
    int first = 1;
    int second = 1;
    int third = 2;
    int i = 2;
    while(i++ != num)
    {
        third = (first + second) % 10007;
        first = second;
        second = third;
    }
    return third;
}

int main()
{
    int n;
    cin >> n;
    cout << Fibobacci(n) << endl;
    return 0;
}

