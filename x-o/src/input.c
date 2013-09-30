#include "drawer.h"
#include "input.h"
#include <stdio.h>
short currentX=0;
short currentO=0;
void getInput(board *mboard,char player){
	int pos;
	char* inputMessage = "Enter Your Position ..... from 1 to 9 \n";
	short wrong = 0;
	do{
	if (wrong)
		inputMessage = "PLEASE CHOOSE EMPTY POS FROM 1 TO 9\n";
	wrong = 1;
	printf("%s",inputMessage);
	scanf("%i",&pos);
	}
	while((pos <0 || pos>10) || (in(mboard->oPos,pos)) || (in(mboard->xPos,pos)));
	switch (player){
	case 'x':
		mboard->xPos[currentX]=pos;
		currentX++;
		break;
	case 'o':
		mboard->oPos[currentO]=pos;
		currentO++;

		break;
	default:
		break;
	}

}
