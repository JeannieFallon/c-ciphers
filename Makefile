all: bin/ bin/rot13.so bin/ciphers.so main
bin/:
	mkdir -p bin
bin/rot13.so: lib/rot13.c lib/rot13.h
	gcc -c lib/rot13.c -o bin/rot13.so
bin/ciphers.so: lib/ciphers.c lib/ciphers.h
	gcc -c lib/ciphers.c -o bin/ciphers.so
main: src/main.c bin/ciphers.so
	gcc src/main.c bin/rot13.so bin/ciphers.so -o bin/main
# clean
binaries = bin/main bin/rot13.so bin/ciphers.so
.PHONY: clean
clean: 
	rm -f $(binaries) *.so
