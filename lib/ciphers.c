#include <stdio.h>
#include "ciphers.h"

void getCipherChar(char * charPtr, int shiftVal) {
	
	int asciiVal;
	int * asciiPtr;

	asciiVal = *charPtr;
	asciiPtr = &asciiVal;

	if (asciiVal >= ENG_UPPER_FLOOR && asciiVal <= ENG_UPPER_CEILING) {
		getCipherAscii(ENG_UPPER_FLOOR, asciiPtr, shiftVal);
	} else if (asciiVal >= ENG_LOWER_FLOOR && asciiVal <= ENG_LOWER_CEILING) {
		getCipherAscii(ENG_LOWER_FLOOR, asciiPtr, shiftVal);
	}
	*charPtr = 'X';
}

void getCipherAscii(int alphaMapVal, int * asciiPtr, int shiftVal) {
	printf("getCipherAscii\n");
	getRotation(asciiPtr, shiftVal);
}

void getRotation(int * alphaIdxPtr, int shiftVal) {
	printf("getRotation\n");
}


