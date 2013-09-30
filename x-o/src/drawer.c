#include<stdio.h>
#include "drawer.h"
void draw(board mboard){
	system("cls");
	short line=1;
	for (;line<=3;line++)
		drawLine(line,mboard);

}

void drawLine(short line,board mboard){
	char* pos7=" ";char* pos8=" ";char* pos9=" ";
	char* pos4=" ";char* pos5=" ";char* pos6=" ";
	char* pos1=" ";char* pos2=" ";char* pos3=" ";
	if (1 == line){
		if (in(mboard.xPos,7))
			pos7="x";
		if (in(mboard.xPos,8))
			pos8="x";
		if (in(mboard.xPos,9))
			pos9="x";
		//////////////////////
		if (in(mboard.oPos,7))
			pos7="o";
		if (in(mboard.oPos,8))
			pos8="o";
		if (in(mboard.oPos,9))
			pos9="o";
		printf("%s|%s|%s\n------\n",pos7,pos8,pos9);
	}
	///////////////////////////////
	if (2 == line){
		if (in(mboard.xPos,4))
			pos4="x";
		if (in(mboard.xPos,5))
			pos5="x";
		if (in(mboard.xPos,6))
			pos6="x";
		//////////////////////
		if (in(mboard.oPos,4))
			pos4="o";
		if (in(mboard.oPos,5))
			pos5="o";
		if (in(mboard.oPos,6))
			pos6="o";
		printf("%s|%s|%s\n------\n",pos4,pos5,pos6);
		}
	///////////////////////////////////
	if (3 == line){
		if (in(mboard.xPos,1))
			pos1="x";
		if (in(mboard.xPos,2))
			pos2="x";
		if (in(mboard.xPos,3))
			pos3="x";
		//////////////////////
		if (in(mboard.oPos,1))
			pos1="o";
		if (in(mboard.oPos,2))
			pos2="o";
		if (in(mboard.oPos,3))
			pos3="o";
		printf("%s|%s|%s\n",pos1,pos2,pos3);
		}


}

short in(short line[],short pos){
	short i=0;
	while(i<=4)
	{
		if(line[i]==pos)
			return 1;
		i++;
	}
	return 0;
}
