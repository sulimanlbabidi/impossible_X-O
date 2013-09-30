#include<stdio.h>
#include "drawer.h"
#include "input.h"
int main(){
	board mboard;
	init(&mboard);
	short playerCounter = 1 ;
	char player;
	while (mboard.xPos[4] == 0 && !result(mboard)){
		draw(mboard);
		if (playerCounter%2)
			player = 'x';
		else
			player = 'o';
		printf("PLAYER %c TURN\n",player);
		getInput(&mboard,player);
		playerCounter++;

	}
	draw(mboard);
	result(mboard);
	system("pause");
	return 0;
}
