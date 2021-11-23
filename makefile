CC=gcc
AR =ar
FLAGS= -Wall -g

OBJECTS_MAIN=main.o
CLASS=my_mat.o

# all: func_a func_so main_a main_so

all: connections

connections: main.o lib_mat.a
	$(CC) $(FLAGS) -o connections main.o lib_mat.a


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

lib_mat.a: my_mat.o 
	$(AR) -rcs lib_mat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean

clean:
	rm -f *.o *.a *.so connections