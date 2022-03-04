#include "TicTacToe.h"

char space[10] = {'o','1','2','3','4','5','6','7','8','9'};

int main(){
	char xomark; // To mark X,O in the space
	int player = 1, i ,option;
	do {
		RowC();
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter the choice : ",player);
		scanf("%d",&option);
		xomark = (player == 1) ? 'X' : 'O';
		if(option == 1 && space[1] == '1')
			space[1] = xomark;
		else if(option == 2 && space[2] == '2')
			space[2] = xomark;
			else if(option == 3 && space[3] == '3')
			space[3] = xomark;
			else if(option == 4 && space[4] == '4')
			space[4] = xomark;
			else if(option == 5 && space[5] == '5')
			space[5] = xomark;
			else if(option == 6 && space[6] == '6')
			space[6] = xomark;
			else if(option == 7 && space[7] == '7')
			space[7] = xomark;
			else if(option== 8 && space[8] == '8')
			space[8] = xomark;
			else if(option == 9 && space[9] == '9')
			space[9] = xomark;

			else {
				printf("Your option is Invalid !");
				printf("Please enter valid option\n");
				printf("Start the game once again");
				// player--;
				// scanf("%d",&option);
				return 0;
			}
			i = Winp();//To Check if the player has won
			player++;

	}while(i == -1);

	RowC();
	if(i==1){
		printf("==>Player %d won",--player);

	}
	else {
		printf("==>Game draw");
	}
		scanf("%d",&option);
		return 0;
}
