#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int number1, number2;
    cout << "Enter number 1: ";
    cin>> number1;
    cout<< "Enter number 2: ";
    cin>>number2;
    int gcd = calculateGCD(number1, number2);
    cout<<"HCF: "<<gcd<<endl;
    int LCM = calculateLCM(number1, number2, gcd);
    cout<<"LCM: "<<LCM<<endl;
}

int calculateGCD(int number1, int number2)
{
    for(int i=number1; i>=1; i--)
    {
        if(number1 % i == 0 && number2 % i == 0)
        {
            return i;
        }
    }
    
}
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm = (number1 * number2)/gcd;
    return lcm;
} //completed