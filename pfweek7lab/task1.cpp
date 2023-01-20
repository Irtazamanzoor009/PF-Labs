#include<iostream>
using namespace std;

void printtable(int number);
 
main()
{
   int number;
    cout<<"Enter a Number: ";
    cin>>number;
    printtable(number);
}
void printtable(int number)
{
    for(int i=1; i<=10; i++)
    {
        
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
    }
}