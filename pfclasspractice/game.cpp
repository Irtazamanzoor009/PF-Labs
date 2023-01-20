#include<iostream>
#include<windows.h>
using namespace std;

void gamemaze();
void gotoxy(int , int);
void move(int , int);

main()
{
	system("cls");
	gamemaze();
	int x = 8;
	while(true)
{
	move(x,3);
	if(x < 16)
{
	x = x+1;	
}
	
}	
	gotoxy(0,20);
	


}

void gamemaze()
{
cout<<" ################################################### "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" ################################################### "<<endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void move(int x, int y)
{
	gotoxy(x-1, y );
	cout<<" ";
	gotoxy(x,y);
	cout<<"P";
	
	Sleep(500);
	

}

