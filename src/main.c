#include <stdio.h>
#include "../lib/rot13.h"

int main(void) {

	//test
	char arr[] = "abc";
	char * arrPtr = &arr[0];
	printf("Plain text:\n%s\n", arr);

	arrPtr = rot13(arrPtr);

	printf("Cipher text:\n%s\n", arr);

	return 0;
}
