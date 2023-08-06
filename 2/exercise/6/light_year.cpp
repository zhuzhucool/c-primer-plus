#include<iostream>
using namespace std;

double Light_year(double);

int main()
{
    double lightyear;

    cin >> lightyear;
    cout << Light_year(lightyear) <<endl;

    system("pause");
    return 0;

}

double Light_year(double n)
{
    return n * 63240;
}