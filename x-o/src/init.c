#include "init.h"
void init(board *mboard){
	short i=0;
	for (;i<=4;i++){
		mboard->oPos[i]=0;
		mboard->xPos[i]=0;
	}
}
