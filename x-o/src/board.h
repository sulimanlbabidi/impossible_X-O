typedef struct board {
	short xPos[5];
	short oPos[4];
}board;

short result(board mboard);
short winLine(short pos[]);
short winColumn(short pos[]);
short winDiag(short pos[]);
