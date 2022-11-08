#include <iostream>
#include <cmath>
using namespace std;

double f(int  x, int  n);
double c(int n, int a);
 
int main()
{
    double t, n, x;
    int level = 0;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    t = f(x, n);
    cout << "level of recource = " << c(n, level) << endl;
    cout << "depth of a recursive = " << f(n, x) << endl;
    cout << "x = " << t << endl;
    return 0;

}
double f(int  x, int  n)
{

    if (n == 0)
        return 1;
    if (n < 0)
        return (1.0/(pow(x, abs(n))));
    else

        return (x * pow(x, (n - 1)));

}
double c(int n, int a)
{
    if (n != 0)
    {
        if (n % 2 == 0)
        {
            return c(n / 2, a);
        }
        else
        {
            return c(n / 2, ++a);
        }
    }
    else
        return a;
}