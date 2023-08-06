#include<iostream>
using namespace std;
int main()
{
    int cun,chi,ban;
    const int a = 12;
    const float b = 0.0254 , c = 2.2;
    float d;
    cout << "Enter your cun:";
    cin >> cun;
    cout << "Enter your chi:";
    cin >> chi;
    cout << "Enter your ban:";
    cin >> ban;
    d = ban * c / ( chi * a  + cun) / b;
    cout << d << endl;
    system("pause");

}