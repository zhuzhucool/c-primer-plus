#include<iostream>
using namespace std;

void one(void);
void tow(void);
int main()
{
    one();
    one();
    tow();
    tow();

    system("pause");
    return 0;
}

void one(void)
{
    cout << "Three bilnd mice" << endl;
}

void tow(void)
{
    cout << "See how they run" << endl;
}