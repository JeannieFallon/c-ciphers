all: bin/ bin/shift.so bin/ciphers.so main
bin/:
	mkdir -p bin
bin/shift.so: lib/shift.c lib/shift.h
	gcc -c lib/shift.c -o bin/shift.so
bin/ciphers.so: lib/ciphers.c lib/ciphers.h
	gcc -c lib/ciphers.c -o bin/ciphers.so
main: src/main.c src/main.h
	gcc src/main.c bin/shift.so bin/ciphers.so -o bin/main
# clean
binaries = bin/shift.so bin/ciphers.so bin/main
.PHONY: clean
clean: 
	rm -f $(binaries) *.so
