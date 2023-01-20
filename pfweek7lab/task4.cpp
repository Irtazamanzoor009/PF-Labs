#include<iostream>
using namespace std;
int number;
int digit;
void totaldigits();
main()
{
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter digit: ";
    cin>>digit;
    totaldigits();

}
void totaldigits()
{
    int count=0;
    int n1;
    while(number>0)
    {
        if(number % 10 == digit)
        {
            count = count + 1;
        }
        number = number / 10;
                
    }
    cout<<count<<endl;
}