CC = gcc
TARGET = hanoi
OBJECTS = hanoi.h main.o get.o move.o

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

clean :
	rm *.o hanoi
