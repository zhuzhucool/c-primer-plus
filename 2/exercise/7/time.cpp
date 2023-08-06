#include<iostream>
using namespace std;

void time(int , int);

int main()
{
    int f,l;
    cin >> f >> l;
    time(f,l);
    system("pause");
    return 0;
}

void time(int f, int l)
{
    cout << f << ":" << l << endl;
}