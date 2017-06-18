#include "stdafx.h"

#include<stdio.h>
#include<windows.h> 
#include<stdlib.h>
#include<iostream>
#include<conio.h>
char map[20][60];
void gotoxy( int x , int y)
{
	COORD pos;
	pos.X = x-1;
	pos.Y = y-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);  
}

void mapint(void)
{
	int i;
	for(i=0;i<19;i++)
	{
		map[i][0]='*';
		map[i][59]='*';
	}
	for(i=0;i<59;i++)
	{
		map[0][i]='*';
		map[19][i]='*';
	}

	map[3][20]='@';
	map[3][30]='@';
	map[3][40]='@';
	//	gotoxy(0,30);
	//	printf("s:down");
	//	gotoxy(0,30);
	//	printf("a:left");
	//	gotoxy(0,30);
	//	printf("d:right");
	//	gotoxy(0,30);
	//	printf("j:fk");
}

void mapshow(void)
{
	int i,flag=0;
	while(flag!=20)
	{ 
		for(i=0;i<60;i++)
		{printf("%c",map[flag][i]);}
		printf("\n");
		flag++;

	}
	printf("w:向上;  s:向下;   a:向左   d:向右   j:攻击");
}



void main()  
{  
	int over=1,x=15,y=30;
	char fangxiang=' ';
	map[x][y]='+';
	mapint();
	while(over)
	{	




		switch(fangxiang)
		{
		case 'w':map[x][y]=' ';map[x-1][y]='+' ;x=x-1;break;
		case 's':map[x][y]=' ';map[x+1][y]='+' ;x=x+1;break;
		case 'a':map[x][y]=' ';map[x][y-1]='+' ;y=y-1;break;
		case 'd':map[x][y]=' ';map[x][y+1]='+' ;y=y+1;break;
		default:break;
		}
		if(fangxiang=='j')
		{
			if(y==20 || y==30 || y==40)  map[3][y]='o';
		}
		mapshow();
		fangxiang=getch();
		system("cls");
		gotoxy(0,0);
		if(map[3][20]=='o'&& map[3][30]=='o' && map[3][40]=='o')
			over=0;
	}
	system("cls");
	printf("逗比逗比逗比逗比逗比逗比逗比逗比逗比逗比逗比逗比逗比 \n逗比逗比逗比逗比逗比逗比逗比逗\n比逗比逗比逗比逗\n比逗比逗比逗比逗比逗\n比逗比逗比逗\n比逗比逗比逗比逗比逗比逗比\n");

}  