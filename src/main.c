#include <stdio.h>
#include "../lib/rot13.h"

int main(void) {

	char arr[5];
	char * arrPtr;

	//test
	arrPtr = &arr[0];
	arrPtr = rot13(arrPtr);

	return 0;
}