all: main lib/rot13.so lib/ciphers.so
main: src/main.c lib/ciphers.so
	gcc src/main.c lib/rot13.so lib/ciphers.so -o bin/main
lib/rot13.so: lib/rot13.c lib/rot13.h
	gcc -c lib/rot13.c -o lib/rot13.so
lib/ciphers.so: lib/ciphers.c lib/ciphers.h
	gcc -c lib/ciphers.c -o lib/ciphers.so


