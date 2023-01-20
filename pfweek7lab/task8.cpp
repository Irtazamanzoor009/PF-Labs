#include<iostream>
#include<windows.h>
using namespace std;
float priceofmachine(int age, float toy, float price );

main()
{
    float machine, toy;
    int age, price=0;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter Price of washing machine: ";
    cin>>machine;
    cout<<"Enter price of toy: ";
    cin>>toy;
    float totalprice = priceofmachine(age, toy, price);
    int amount = machine - totalprice;
    if(amount < 0)
    {
        cout<<"Yes! "<<abs(amount)<<endl;
    } 
    if(amount > 0)
    {
        cout<<"No! "<< abs(amount) <<endl;
    }
   
    
}

float priceofmachine(int age, float toy, float price)
{
    int x=1;
    int count2=0, count1=0;
    for(int i=1; i<=age; i++)
    {
        if(i % 2 == 0)
        {
            count1 = count1 + 1;
            price = (x * 10) + price;
           x++;  
        }

        else 
        {
            count2 = count2 + 1;
        }
    }
    float result1 = price - count1; 
    float result2 = count2 * toy;

    float total = result1 + result2;
    return total;
    
    
}