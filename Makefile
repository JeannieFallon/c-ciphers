main: src/main.c lib/ciphers.so
	gcc src/main.c lib/ciphers.so -o bin/main
ciphers.so: lib/ciphers.c lib/ciphers.h
	gcc -c lib/ciphers.c -o lib/ciphers.so
