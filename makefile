CFLAGS = -Wall -Werror 
all: bin/deposit-calc
	
bin/deposit-calc : build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc $(CFLAGS)

build/deposit.o: src/deposit.c src/deposit.h
	gcc -c src/deposit.c -o build/deposit.o $(CFLAGS)

build/main.o: src/main.c src/deposit.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

test: bin/deposit-calc-test

bin/deposit-calc-test: build/test/main.o build/test/deposit_test.o build/deposit.o
	gcc build/test/main.o build/test/deposit_test.o build/deposit.o -o bin/deposit-calc-test $(CFLAGS)

build/test/main.o: src/deposit.h test/main.c
	gcc -I thirdparty src -c test/main.c -o build/test/main.o $(CFLAGS)

build/test/deposit_test.o: src/deposit.h test/deposit_test.c
	gcc -I thirdparty src -c test/deposit_test.c -o build/test/deposit_test.o $(CFLAGS)

.PHONY: all clean test
clean:
	rm -rf bin/* build/*.o build/test/*.o
