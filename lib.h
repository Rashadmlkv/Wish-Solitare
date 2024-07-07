#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>

void shuffle(char deck[][4]);
void printDeck2(char deck[][4]);
void printTop(char deck[][4], int top[]);
int checkState(char deck[][4], int top[]);
int getPieces(int *input1, int *input2);
void assignTop(int top[], int input1, int input2);

#endif
