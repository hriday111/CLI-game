#include"xy.cpp"
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<ctime>
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

