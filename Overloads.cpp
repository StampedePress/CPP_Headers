#include <iostream>
using namespace std;

/*
Declare what functions are used in this file
*/

double add(double x, double y);
double add(double a, double b, double c);
void add(double x);

int main()
{
    auto a = add(3,4);
    cout << "3 + 4 = " << a << endl;    

    double b = add(1.2, 3.4, 5.6);
    cout << "1.2 + 3.4 + 5.6 = " << b << endl;

    add(4.3);

    return 0;
}
