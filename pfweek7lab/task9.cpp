#include<iostream>
#include<cmath>
using namespace std;
float calculateprice(float money, int year);
main()
{
    float money;
    int year;
    cout<<"Enter inherited money: ";
    cin>> money;
    cout<<"Enter the year: ";
    cin>> year;
    float survive = calculateprice(money, year);

    float left = money - survive;

    if(left > 0)
    {
        cout<<"Yes! He will live a carefree life and will have "<<left<<" dollars left";
    }
    if(left < 0)
    {
        cout<<"He will need "<<abs(left)<<" dollars to survive";
    }
}

float calculateprice(float money, int year)
{
    int count1=0;
    int count2=0;
    float price1=0, price2=0;
    int ageinodd=18;
    for(int i = 1800; i <= year; i++)
    {
        if(i % 2 == 0)
        {
            count1 = count1 + 1;
            price1 = 12000;
        }
        else if ( i % 2 != 0)
        {
            ageinodd = ageinodd + 1;
            count2 = count2 + 1;
            price2 = 12000 + (50 * ageinodd);
        }

    }
    
    float  price_1 = price1 * count1;
    float price_2 = price2 * count2;
    float total = price_1 + price_2;
    return total;
}