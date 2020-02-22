string: main.c new_string.h
	gcc -Wall main.c -o string
clean:
	rm -f string
