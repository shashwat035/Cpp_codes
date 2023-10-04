#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float radius,height,pi=3.14,volume;
    cout << "Enter the radius of the cone :";
    cin >> radius;
    cout << "Enter the height of the cone :"; 
    cin >> height;

    volume=1.0/3.0*pi*pow(radius,2)*height;
    cout << "The volume of the cone is :" << volume << endl;

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     float radius,height,pi=3.14,volume;
//     printf("enter the radius of the cone:");
//     scanf("%f",&radius);
//     printf("enter the height of the cone;");
//     scanf("%f",&height);

//     volume=1.0/3.0*pi*radius*radius*height;
//     printf("the volume of the cone is %f",volume);

//     return 0;

// }

