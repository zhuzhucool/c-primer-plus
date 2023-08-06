#include<iostream>
using namespace std;

int main()
{
    long arc;
    const int hour = 24 , minute = 60, arcs = 60;
    cout << "Enter the number of seconds: ";
    cin >> arc;
    cout << arc << " seconds = ";
    int a = arc / ( arcs * minute * hour);
    cout << a << " days, ";
    int b = ( arc - a * arcs * minute * hour) / ( arcs * minute);
    cout << b << " hours, ";
    int c = (arc - a * arcs * minute * hour - b * arcs * minute) / arcs;
    cout << c << " minutes,";
    int d = arc - a * arcs * minute * hour - b * arcs * minute - c * arcs;
    cout << d << " seconds;\n";
    
    system("pause");
}