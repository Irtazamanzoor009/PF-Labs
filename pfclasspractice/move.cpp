#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

void maze();
void gotoxy(int x, int y);
void showpacman(int x, int y);
void clearpacman(int x, int y);
char GetCharAtxy(short int x, short int y);
void showghost(int x, int y);


main()
{
	system("cls");	
	
int px = 8;
int py = 3;
int gx = 10;
int gy = 2;
	maze();
	showghost(gx,gy);
	showpacman(px,py);
while(true)
{
	
	if(GetAsyncKeyState(VK_RIGHT))
	{
		char nextlocation = GetCharAtxy(px+1 , py);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			px = px+1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			
			gotoxy(17,5);
			cout<<"P";
			Sleep(1000);
			gotoxy(17,5);
			cout<<"I";
			Sleep(1000);
			gotoxy(17,5);
			cout<<"i";
			Sleep(1000);
			gotoxy(17,5);
			cout<<"_";
			gotoxy(17,5);
			cout<<" ";
			Sleep(1000);
			gotoxy(16,6);
			cout<<"Game over";
			
			
		}
	}

	if(GetAsyncKeyState(VK_LEFT))
	{
		char nextlocation = GetCharAtxy (px-1,py);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			px = px-1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			
			gotoxy(15,5); cout<<"Game over";
			
		}
	}

	if(GetAsyncKeyState(VK_UP))
	{
		char nextlocation = GetCharAtxy(px,py-1);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			py = py-1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			
			gotoxy(15,5); cout<<"Game over";
			
		}
	}
	if(GetAsyncKeyState(VK_DOWN))
	{
		char nextlocation = GetCharAtxy(px,py+1);
		if(nextlocation == ' ')
		{
			clearpacman(px,py);
			py = py+1;
			showpacman(px,py);
		}
		if(nextlocation == 'G')
		{
			clearpacman(px,py);
			
			gotoxy(15,5); cout<<"Game over";
			
		}
	}

}	
	



gotoxy(0,20);
}

void maze()
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

void showpacman(int x, int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);	

}

void showghost(int x, int y)
{
	gotoxy(x,y);
	cout<<"G";
	

}

void clearpacman(int x , int y)
{
	gotoxy(x,y);
	cout<<" ";
}


char GetCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}




