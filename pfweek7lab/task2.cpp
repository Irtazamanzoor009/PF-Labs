#include<iostream>
using namespace std;
int num;
void series();
main()
{
    cout<<"Input the length of Fibonacci Series: ";
    cin>>num;
    series();
}

void series()
{
    int n1=0;
    int n2=1;
    int next=0;
    cout<< n1 <<endl;
    cout<<n2<<endl; //cout<< previous << "," << current;
    for(int i=1; i<=num-2; i++)
    {
        
        next = n1 + n2;   //cout << previous << " , " << current << " , " << " , "<< next<< " , " ;
        cout<<next<<endl; // cout << "," << next;
        n1=n2; 
        n2=next;
    }
}