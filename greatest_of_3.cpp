#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "Enter 3 numbers :\n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    if (num1>num2 && num1>num3)     
    {
        cout << num1 <<" is the greatest among all the three";
    }
    else if (num2>num1 && num2>num3)
    {
        cout << num2 <<" is the greatest among all the three";
    }
    else 
    {
        cout << num3 <<" is the greatest among all the three";
    }

    return 0;
}