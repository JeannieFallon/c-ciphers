#include <stdio.h>
#include "caesar.h"
#include "ciphers.h"

void caesar(char * arr, int shiftVal) {

	printf("Caesar shiftVal inside caesar() is %d\n", shiftVal);

	char * charPtr;
	int i;

	i=0;
	while (arr[i] != '\0') {
		charPtr = &arr[i];
		getCipherChar(charPtr, shiftVal);
		i++;
	}
}