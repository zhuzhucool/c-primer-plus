#include<iostream>
using namespace std;

float Celsius(int);

int main()
{
    int n;
    cin >> n;
    cout << Celsius(n) << endl;

    system("pause");
    return 0;
}

float Celsius(int n)
{
    return 1.0 * n * 1.8 + 32.0;
}