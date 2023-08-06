#include<iostream>
using namespace std;

int main()
{
    int m_tall,cm_tall;
    cout << "请输入身高(cm):" << endl;
    cin >> cm_tall;
    cout << cm_tall / 100 << " m " ;
    cout << cm_tall % 100 << " cm" << endl;

    system("pause");

}