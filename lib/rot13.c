#include <stdio.h>
#include "rot13.h"
#include "ciphers.h"

char * rot13(char * arr) {

	printf("%d\n", SHIFT_VAL);

	char * charPtr;
	int i;

	i = 0;
	while (arr[i] != '\0') {
		charPtr = &arr[i];

		//debug
		printf("%p\n", charPtr);
		printf("%c\n", arr[i]);

		getCipherChar(charPtr, 1);
		i++;
	}
	
	return arr;
}
