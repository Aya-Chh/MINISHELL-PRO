CC=gcc
CFLAGS=-Wall -Wextra -Iinclude -g
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
TARGET=MiniShell-Pro

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
