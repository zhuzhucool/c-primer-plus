#include<iostream>
using namespace std;

int main()
{
    const int temp = 60;
    int degree;
    float minute, arc;
    cout << "Enter a latitude in degrees, minutes, and seconds;\n";
    cout << "First, enter the degrees:";
    cin >> degree;
    cout << "Next, enter the the minutes of arc:";
    cin >> minute;
    cout << "Finally, enter the seconds of arc:";
    cin >> arc;
    float degrees;
    degrees = degree + minute / temp + arc / temp / temp;
    cout << degree << " degrees, " << minute << " minutes, " << arc << " seconds = " << degrees << " degrees;\n";

    system("pause");

}