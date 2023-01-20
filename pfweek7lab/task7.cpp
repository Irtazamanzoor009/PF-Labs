#include<iostream>
using namespace std;
void printpercentage();
float line;
float number;
main()
{
    cout<<"Enter a number of lines passed: ";
    cin>>line;
    
    printpercentage();
}
void printpercentage()
{
    float count1=0, count2=0, count3=0, count4=0, count5=0;
    float result1, result2, result3, result4, result5;
    for(int i=1; i<=line; i=i+1)
    {
        cout<<"Enter number: ";
        cin>>number;
        if(number > 0 && number < 200)
    {        
        count1 = count1 + 1;
    }
        

    if(number >= 200 && number < 400)
     {
        count2 = count2 + 1;       
    }

     if(number >=400 && number < 600)
     {
        count3 = count3 + 1;        
    }

     if(number >= 600 && number < 800)
     {
        count4 = count4 + 1;        
    }

     if(number >= 800 && number < 1000)
     {
        count5 = count5 + 1;       
    }
    
      
    }
        result1 = (count1 / line) * 100 ;
        result2 = (count2 / line) * 100 ;
        result3 = (count3 / line) * 100 ;
        result4 = (count4 / line) * 100 ;
        result5 = (count5 / line) * 100 ;

        cout<<"p1: "<<result1<<endl;      
        cout<<"p2: "<<result2<<endl;        
        cout<<"p3: "<<result3<<endl;     
        cout<<"p4: "<<result4<<endl;     
        cout<<"p5: "<<result5<<endl;
      
}