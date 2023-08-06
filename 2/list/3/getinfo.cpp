#include<iostream>
using namespace std;
int main()
{
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots; 
    cout << "Here are tow more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrtos." << endl;


    system("pause");
    return 0; 
}