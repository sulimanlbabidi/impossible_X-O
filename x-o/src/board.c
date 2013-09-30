#include "drawer.h"
#include<stdio.h>
short result(board mboard){
	char player ;
	short isWinner = 0;
	if (winLine(mboard.oPos) || winColumn(mboard.oPos) || winDiag(mboard.oPos) ){
		player = 'O';
		isWinner = 1;
	}
	if (winLine(mboard.xPos) || winColumn(mboard.xPos) || winDiag(mboard.xPos) ){
		player = 'X';
		isWinner = 1;
	}

	if (isWinner){
		printf("Player %c Wins\n",player);
		return 1;}
	else{
		printf("DRAW\n");
		return 0;}

}

short winLine(short pos[]){

	if (in(pos,7) && in(pos,8) && in(pos,9))
		return 1;
	if (in(pos,4) && in(pos,5) && in(pos,6))
		return 1;
	if (in(pos,1) && in(pos,2) && in(pos,3))
		return 1;
	return 0;
}
short winColumn(short pos[]){

	if (in(pos,7) && in(pos,4) && in(pos,1))
		return 1;
	if (in(pos,8) && in(pos,5) && in(pos,2))
		return 1;
	if (in(pos,9) && in(pos,6) && in(pos,3))
		return 1;
	return 0;
}

short winDiag(short pos[]){

	if (in(pos,7) && in(pos,5) && in(pos,3))
		return 1;
	if (in(pos,9) && in(pos,5) && in(pos,1))
		return 1;
	return 0;
}

