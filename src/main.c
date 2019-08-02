#include <stdio.h>
#include "../lib/rot13.h"
#include "../lib/caesar.h"

void getArrLen(char *, int *);
void copyArr(char *, char *);

int main(void) {

	//TODO cli/o
	char plainArr[] = "aBc1! xYz";
	int caesarShiftVal = 12;

	// get length of input plaintext
	int len;
	int * lenPtr = &len;
	getArrLen(plainArr, lenPtr);

	printf("len is: %d\n", len);

	// initialize cipher arrays & load with plaintext
	char rot13Arr[len];
	char caesarArr[len];
	copyArr(plainArr, rot13Arr);
	copyArr(plainArr, caesarArr);

	//TEST
	printf("New arrays: rot13 - %s, caesar - %s\n", rot13Arr, caesarArr);

	rot13(rot13Arr);
	caesar(caesarArr, caesarShiftVal);

	printf("Plain text:\n%s\n", plainArr);
	printf("ROT13 cipher text:\n%s\n", rot13Arr);\
	printf("Caesar cipher text:\n%s\n", caesarArr);\

	return 0;
}

void getArrLen(char * arr, int * lenPtr) {
	int i = 0;
	while (arr[i] != '\0') {
		*lenPtr = i;
		i++; 
	}
	// add space for null-terminating char
	*lenPtr++;
}

void copyArr(char * arr, char * newArr) {
	int i = 0;
	while (arr[i] != '\0') {
		newArr[i] = arr[i];
		i++;
	}
	// add null-terminating char
	newArr[i+1] = '\0';
}
