#include <stdio.h>
#include "caesar.h"
#include "ciphers.h"

void caesar(char * arr, int shiftVal) {

	char * charPtr;
	int i;

	i=0;
	while (arr[i] != '\0') {
		charPtr = &arr[i];
		getCipherChar(charPtr, shiftVal);
		i++;
	}
}