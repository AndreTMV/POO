#include <iostream>
using namespace std;
int suma(int &, int &);
int x = 0, y = 0, r = 0;

int main(int argc, char const *argv[])
{
    cout << "Introduce dos valores" << endl;
    cin >> x >> y;
    cout << suma(x, y) << endl;
    cout << "R:" << r << endl;
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    return 0;
}

int suma(int &a, int &b)
{
    a = a + b;
    cout << x << endl;
    return a;
}