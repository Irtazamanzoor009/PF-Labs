#include<iostream>
using namespace std;
int number=0;
void sumofdigits();
main()
{
    cout<<"Enter a number: ";
    cin>>number;
    sumofdigits();
}
void sumofdigits()
{
    int count = 0;
    int sum = 0;
    int mod;
    while(number>0)
    {
        mod = number % 10;
        number = number / 10;
        sum = sum + mod;
        
    }
    cout<<"Sum: "<<sum<<endl;
    
}