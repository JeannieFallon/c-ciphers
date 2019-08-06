#include <stdio.h>
#include "main.h"
#include "../lib/rot13.h"
#include "../lib/caesar.h"
#include "../lib/vigenere.h"

int main(void) {

	//TODO use realloc & make array sizes dynamic
	char plainArr[100];
	char keyword[10];
	int caesarShiftVal;

	printf("Enter string plaintext (max 100 char):\n");
	scanf("%[^\n]s", plainArr);

	printf("Enter integer for Caesar key value:\n");
	scanf("%d", &caesarShiftVal);

	printf("Enter string for Vigenere keyword (max 10 char):\n");
	scanf("%[^\n]s", keyword);

	// get lengths of input plaintext & keyword
	int len, keyLen;
	int * lenPtr = &len;
	int * keyLenPtr = &keyLen;
	getLen(plainArr, lenPtr);
	getLen(keyword, keyLenPtr);

	printf("len=%d, keyLen=%d\n", len, keyLen);

	// initialize cipher arrays & load with plaintext
	char rot13Arr[len];
	char caesarArr[len];
	char vigenereArr[len];
	copyArr(plainArr, rot13Arr);
	copyArr(plainArr, caesarArr);
	copyArr(plainArr, vigenereArr);

	rot13(rot13Arr);
	caesar(caesarArr, caesarShiftVal);
	vigenere(vigenereArr, keyword, len, keyLen);

	printf("Plain text:\n%s\n", plainArr);
	printf("ROT13 cipher text:\n%s\n", rot13Arr);
	printf("Caesar cipher text:\n%s\n", caesarArr);
	printf("Vigenere cipher text:\n%s\n", vigenereArr);

	return 0;
}

void getLen(char * arr, int * lenPtr) {
	int i = 0;
	while (arr[i] != '\0') {
		*lenPtr = i+1;
		i++; 
	}
	// add space for null-terminating char
	(*lenPtr)++;
}

void copyArr(char * arr, char * newArr) {
	int i = 0;
	while (arr[i] != '\0') {
		newArr[i] = arr[i];
		i++;
	}
	// add null-terminating char
	newArr[i] = '\0';
}
