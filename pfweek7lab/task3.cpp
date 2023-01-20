#include<iostream>
using namespace std;
int number;
void totaldigits();
main()
{
    cout<<"Enter a number: ";
    cin>>number;
    totaldigits();

}
void totaldigits()
{
    int count=0;
    while(number>0)
    {
         count = count + 1;
         number = number / 10;
        
    }
    cout<<count;
}