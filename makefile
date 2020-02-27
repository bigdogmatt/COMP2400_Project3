string: main.c new_string.h project3.c
	gcc -Wall main.c project3.c -o string
clean:
	rm -f string
