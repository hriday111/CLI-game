#include<iostream>
#include<windows.h>
#include<conio.h>
#include<ctime>
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<ctime>


using namespace std;


class xy{
	private:
		int c,d;
		//code
	public:
		void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 
void center()
{
	int height = 16;
	int width = 74;
	int Ca = height/2;
int	Cb = width/2;
	gotoxy(Cb,Ca);
}
void border()
{
	system("color 3");
	system("mode con:cols=80 lines=25");
	system("title WELCOME - hridaybarot.home.blog");
	system("cls");

	printf("\n  %c",218);
	int x;
	for(x=0;x<75;x++)
		printf("%c",196);
	printf("%c  ",191);
	for(x=0;x<17;x++){
		gotoxy(2,x+2);
		printf("%c",179);
		gotoxy(78,x+2);
		printf("%c ",179);
	}

	printf("  %c",192);
	for(x=0;x<75;x++)
		printf("%c",196);
	printf("%c  ",217);
		gotoxy(34,70);
//cout<<x<<endl;
}
	void intr()
		{
border();
	int height = 16;
	int width = 74;
	int u=0;
	int Ca = height/2;
int	Cb = width/2;
system("color F3");
for(u=0;u<10;u++)
{

	gotoxy(Cb,Ca);
cout<<"@"<<endl;
Cb=Cb+1;
Ca=Ca+1;
//u+=u;
Sleep(100);
}

for(u=9;u>=0;u--)
{

	gotoxy(Cb,Ca);
cout<<" "<<endl;
Cb=Cb-1;
Ca=Ca-1;
//u+=u;
Sleep(100);
}
system("color F1");
for(u=5;u>=0;u--)
{

	gotoxy(Cb,Ca);
cout<<"@"<<endl;
Cb=Cb+1;
Ca=Ca-1;
//u+=u;
Sleep(100);
}
for(u=0;u<6;u++)
{

	gotoxy(Cb,Ca);
cout<<" "<<endl;
Cb=Cb-1;
Ca=Ca+1;
//u+=u;
Sleep(100);
}
system("color F2");
for(u=0;u<10;u++)
{

	gotoxy(Cb,Ca);
cout<<"@"<<endl;
Cb=Cb-1;
Ca=Ca+1;
//u+=u;
Sleep(100);
}
for(u=9;u>=0;u--)
{

	gotoxy(Cb,Ca);
cout<<" "<<endl;
Cb=Cb+1;
Ca=Ca-1;
//u+=u;
Sleep(100);
}
system("color F9");
for(u=5;u>=0;u--)
{

	gotoxy(Cb,Ca);
cout<<"@"<<endl;
Cb=Cb-1;
Ca=Ca-1;
//u+=u;
Sleep(100);
}
for(u=0;u<=5;u++)
{

	gotoxy(Cb,Ca);
cout<<" "<<endl;
Cb=Cb+1;
Ca=Ca+1;
//u+=u;
Sleep(100);
}
Ca = height/2;
Cb = width/2;
system("color F2");
for(u=0;u<=20;u++)
{

	gotoxy(Cb,Ca);
cout<<">"<<endl;
Cb=Cb+1;
//Ca=Ca+1;
//u+=u;
Sleep(100);
}
system("color F3");
Ca = height/2;
Cb = width/2;
for(u=0;u<=20;u++)
{

	gotoxy(Cb,Ca);
cout<<"<"<<endl;
Cb=Cb-1;
//Ca=Ca+1;
//u+=u;
Sleep(100);
}
border();
system("color A0");
Sleep(1000);
system("color B0");
Sleep(1000);
system("color C0");
Sleep(1000);
system("color D0");
Sleep(1000);
system("color E0");
Sleep(1000);
system("color F0");
Sleep(1000);
system("color F3");
Sleep(1000);
//border();
//Sleep(1000);
cout<<"3"<<endl;
Sleep(1000);
cout<<" 2"<<endl;
Sleep(1000);
cout<<" 1"<<endl;
Sleep(1000);
cout<<"Press enter to continue..."<<endl;
}
};

