#include<iostream>
#include<conio.h>
using namespace std;
int level = 0;

void P_level()
{
	level+=level;
	cout<<level<<endl;
	getch();
}
