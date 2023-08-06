#include<iostream>
using namespace std;

int main(){
    const int size = 20;
    char name[size];
    char dessert[size];

    cout << "Enter your name:" << endl;
    cin.get(name, size).get();
    cout << "Enterv your dessert:" << endl;
    cin.get(dessert, size).get();
    cout << name << " " << dessert << endl;

    return 0;
}