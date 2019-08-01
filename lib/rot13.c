#include <stdio.h>
#include "rot13.h"
#include "ciphers.h"

void rot13(char * arr) {

	char * charPtr;
	int i;

	i = 0;
	while (arr[i] != '\0') {
		charPtr = &arr[i];
		getCipherChar(charPtr, SHIFT_VAL);
		i++;
	}
}
