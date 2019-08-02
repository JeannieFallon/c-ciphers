all: bin/ bin/ciphers.so bin/rot13.so bin/caesar.so main
bin/:
	mkdir -p bin
bin/ciphers.so: lib/ciphers.c lib/ciphers.h
	gcc -c lib/ciphers.c -o bin/ciphers.so
bin/rot13.so: lib/rot13.c lib/rot13.h
	gcc -c lib/rot13.c -o bin/rot13.so
bin/caesar.so: lib/caesar.c lib/caesar.h
	gcc -c lib/caesar.c -o bin/caesar.so
main: src/main.c bin/ciphers.so
	gcc src/main.c bin/rot13.so bin/caesar.so bin/ciphers.so -o bin/main
# clean
binaries = bin/ciphers.so bin/rot13.so bin/caesar.so bin/main
.PHONY: clean
clean: 
	rm -f $(binaries) *.so
