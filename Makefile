all: bin/ bin/ciphers.so bin/rot13.so bin/caesar.so bin/vigenere.so main
bin/:
	mkdir -p bin
bin/ciphers.so: lib/ciphers.c lib/ciphers.h
	gcc -c lib/ciphers.c -o bin/ciphers.so
bin/rot13.so: lib/rot13.c lib/rot13.h
	gcc -c lib/rot13.c -o bin/rot13.so
bin/caesar.so: lib/caesar.c lib/caesar.h
	gcc -c lib/caesar.c -o bin/caesar.so
bin/vigenere.so: lib/vigenere.c lib/vigenere.h
	gcc -c lib/vigenere.c -o bin/vigenere.so
main: src/main.c src/main.h
	gcc src/main.c bin/rot13.so bin/caesar.so bin/vigenere.so bin/ciphers.so -o bin/main
# clean
binaries = bin/ciphers.so bin/rot13.so bin/caesar.so bin/main
.PHONY: clean
clean: 
	rm -f $(binaries) *.so
