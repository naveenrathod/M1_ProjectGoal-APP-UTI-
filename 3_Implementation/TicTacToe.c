#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Winp();//For checking the winner
void RowC();
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
				printf("Option is Invalid !");
				player--;
				getch();
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
		getch();
		return 0;
}
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

