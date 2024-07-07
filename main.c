#include "lib.h"

void main(){

	char stacks[8][4];
	int top[8] = {3,3,3,3,3,3,3,3};
	int input1 = 0, input2 = 0;


	shuffle(stacks);
	int state = checkState(stacks, top);

	printTop(stacks,top);
	printf("\n");
	printDeck2(stacks);
	input1, input2 = getPieces(&input1, &input2);

	printf("\n");
	assignTop(top, input1, input2);
	printTop(stacks, top);
}
