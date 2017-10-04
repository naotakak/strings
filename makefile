all: str_functions.o
	gcc str_functions.o -o strings.out

str_functions.o: str_functions.c
	gcc -c str_functions.c

run: all
	./strings.out

clean:
	rm *.o
	rm ./strings.out
