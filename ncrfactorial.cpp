#include <iostream>

using namespace std;
int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int printNCR(int n, int r)
{
    int nFactorial = factorial(n);
    int rFactorial = factorial(r);
    int nrFactorial = factorial(n - r);

    return (nFactorial) / (nrFactorial * rFactorial);
}
int main()
{
    int n, r;
    cout << "Enter the value of n & r"<<endl;
    cin >> n >> r;

    int ncr = printNCR(n, r);
    cout << ncr;
    return 0;
}
