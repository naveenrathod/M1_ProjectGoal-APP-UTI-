#include "TicTacToe.h"
extern char space[10];
void RowC(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",space[1],space[2],space[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",space[4],space[5],space[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",space[7],space[8],space[9]);
	printf("     |     |     \n");
}

int Winp(){
	if(space[1] == space[2] && space[2] == space[3])
		return 1;
	else if (space[4] == space[5] && space[5] == space[6])
		return 1;
	else if(space[7] == space[8] && space[8] == space[9])
		return 1;
	else if(space[1] == space[4] && space[4] == space[7])
		return 1;
	else if(space[2] == space[5] && space[5] == space[8])
		return 1;
	else if(space[3] == space[6] && space[6] == space[9])
		return 1;
	else if(space[1] == space[5] && space[5] == space[9])
		return 1;
	else if(space[3] == space[5] && space[5] == space[7])
		return 1;
	else if(space[1] != '1' && space[2] != '2' && space[3] != '3' && space[4] !='4' && space[5] != '5' && space[6] != '6' && space[7] != '7' && space[8] != '8' && space[9] != '9')
		return 0;
	else
		return -1;
}

