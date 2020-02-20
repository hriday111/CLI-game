#include<iostream>
#include<conio.h>
#include "input.cpp"
#include "prnt.cpp"
#include<windows.h>
#include<dos.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
#include<string.h>
#include "xy.cpp"
#include<stdio.h>
//#include"intro.cpp"
//intro intro;
//#include "textcolor.cpp"
xy xy;
choice choice;
prnt prnt;
using namespace std;
int cho;
int i = 0;

void game()
{
cout<<"This is your fist day at your 4th grade."<<endl;
getch();
cout<<"You see a preety girl on the other end of the class"<<endl;
getch();
cout<<"As you are a very talkitive boy, the teacher makes you sit with the pretty girl"<<endl;
getch();
cout<<"What do you do? "<<endl;
getch();
system("cls");
cout<<"1. Argue the teacher."<<endl;

cout<<"2.Sit next to the girl"<<endl<<"Enter '1' or '2' "<<endl;
choice.inp();
if(choice.ch == 1)
{
	
	system("cls");
	system("color C0");
	cout<<"restart the game"<<endl;
	//prnt.bye();
	exit(3);
	
}
else if(choice.ch == 2)
{
	//P_level();
	system("cls");
	system("color F4");
	choice.ch = 0;
	cout<<"OK. Good choice."<<endl;
	getch();
	cout<<"So not your are sitting with the girl"<<endl;
	getch();
    cout<<"You kind off like her"<<endl;
    getch();
    cout<<"You get this idea of writing  a paper.. "<<endl;
    getch();
    cout<<"Like this...(Press enter to see)"<<endl;
    getch();
    prnt.CHIT();
    cout<<"She highlights the 'YES' part of the paper.."<<endl;
    getch();
    cout<<"You immediately know that she likes you also "<<endl;
    getch();
    cout<<"You and she are relly good friends..."<<endl;
    getch();
    cout<<"Her name is DIANDRA"<<endl;
    getch();
    cout<<"You know she likes you and you also like her but.."<<endl;
    getch();
    cout<<" She does not know it..You keep going with the flow as.. "<<endl;
    getch();
    cout<<"..her friend.."<<endl;
    getch();
    cout<<"One time , some of your classmate are teasing and bulling you..."<<endl;
    getch();
    cout<<"For always being with the diandra"<<endl;
    getch();
    cout<<"You get angry. You have 2 choices"<<endl;
    getch();
    system("cls");
    cout<<"1.Hit those guys"<<endl;
   // getch();
    cout<<"2.Ignore them.."<<endl;
    getch();
    choice.inp();
    if(choice.ch == 1)
    {
    	system("cls");
    	system("color C0");
    	cout<<"You failed. "<<endl;
    	getch();
    	cout<<"If you fight with those boys.."<<endl;
    	getch();
    	cout<<"You would make a bad impression in front of Diandra"<<endl;
    	getch();
    //	prnt.bye();
    	exit(3);
    	
	}
	else if(choice.ch == 2 )
	{
		//P_level();
        choice.ch = 0;
		system("cls");
		system("color F2");			
		cout<<"GOOD. Your may procced"<<endl;
		getch();
		cout<<"One time , you do not know why, but she got angry at you.."<<endl;
		getch();
		cout<<"She said she doesn't want to be you friend anymore"<<endl;
		getch();
		cout<<"You have 3 choices "<<endl;
		getch();
		system("cls");
		cout<<"1.Ask her what happened.."<<endl;
		cout<<"2.Get angry at her.."<<endl;
		cout<<"3.Agree with her and forget her.."<<endl;
		cout<<"Enter '1', '2', '3' "<<endl;
		choice.inp();
		if(choice.ch == 2)
		{
		system("cls");
    	system("color C0");
    	cout<<"You failed. "<<endl;
    	getch();
		exit(3);	
		}
		else if(choice.ch == 3)
		{
		system("cls");
    	system("color C0");
    	cout<<"You failed. "<<endl;
    	getch();
		exit(3);	
		}
		else if(choice.ch == 1)
		{
		//	P_level();
			choice.ch=0;
			system("cls");
			system("color F3");
			cout<<"Good"<<endl;
			getch();
			cout<<"She tells you that she does not want to tell you.."<<endl;
			getch();
			cout<<"You have 2 choices..."<<endl;
			getch();
			cout<<"1.Get angry at her and cruse her.."<<endl;
			cout<<"OR"<<endl;
			cout<<"2.Politely say it is ok."<<endl;
			choice.inp();
			if(choice.ch == 1)
			{
					system("cls");
    	system("color C0");
    	cout<<"You failed. "<<endl;
    	getch();
		exit(3);	
			}
			else if(choice.ch == 2)
			{
				
				system("cls");
				system("color F5");
				cout<<"Good"<<endl;
				cout<<"The game ends now...Bye :(..Wait for a future update"endl;
				getch();
			}
		}
	}
	
}


}
int main()
{
xy.intr();
		getch();
		system("cls");
system("color F0");
cout<<"HI. Enter your name: ";
char name[50];
cin>>name;
cout<<"HI. "<<name;
int s;
do{
		system("cls");
cout<<" Enter '1' to play or '2' quit or '3' for instructions: ";
cin >> s;
switch (s)
{
	case 1:
		game();
		break;
	case 2:
		//break;
		cout<<"BYE :) "<<endl;
		prnt.bye();
		return 0;
	case 3:
		cout<<"1.Press enter to continue after every line."<<endl;
		getch();
		system("color F4");
		cout<<"2.After every right answer ";
		getch();
		system("color F1");
		cout<<"your text color will change ";
		getch();
		system("color F2");
		cout<<"indicating that you leveled up."<<endl;
		getch();
		cout<<"If you give a wrong answer you loose and have too play from the start.."<<endl;
		getch();
		system("color F0");
		system("cls");
		break;
		//cout<<""
	default :
		cout<<"Invalid..."<<endl;
		break;
	}
}while(s != 2);
return 0;	
}
