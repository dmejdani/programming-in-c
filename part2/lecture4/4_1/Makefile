# compiler and the flag options
CC = gcc
CFLAGS = -Wall

# object names
OBJ = linked_list.o use_linked_list.o

# final executable
all: use_linked_list

# compiling command
use_linked_list:	$(OBJ)
					$(CC) $(CFLAGS) -o use_linked_list $(OBJ)

# declaring and definition files
use_linked_list.o: linked_list.h linked_list.c

# deleting all object files and the executable
clean:
	rm -f use_linked_list *.o
	rm -f use_linked_list
