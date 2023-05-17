#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(void)
{
    int someNumber;
    cin >> someNumber;

    cout << setprecision(4) << fixed << log2f(someNumber) << endl;
    return 0;
}