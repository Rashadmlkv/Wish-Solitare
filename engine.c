#include "lib.h"

void shuffle(char deck[][4]){
    
	for (int i = 0; i < 8; i++){
                for (int j = 0; j < 4; j++){
			deck[i][j] = rand() % (77 - 65 + 1) + 65;
		}
	}
}

void printDeck2(char deck[][4]){

	for (int i = 0; i < 8; i++){
                for (int j = 0; j < 4; j++){
                	putchar(deck[i][j]);
		}
		printf("\n");
        }
}

void printTop(char deck[][4], int top[]){

	for (int i = 0; i < 8; i++){
		putchar(deck[i][top[i]]);
	}
}

int checkState(char deck[][4], int top[]){

	for (int i = 0; i < 8; i++){
	
		for (int j = 1; j < 8; j++){
		
			if (deck[i][top[j]] == deck[j][top[j]])
				return 1;
		}
	}
	return 0;
}

int getPieces(int *input1, int *input2){

	printf("Select cards between 1-8: ");
	scanf("%d %d", input1, input2);

	return *input1, *input2;
}

void assignTop(int top[], int input1, int input2){

	top[input1-1] = top[input1-1] - 1;
	top[input2-1] = top[input2-1] - 1;
}
