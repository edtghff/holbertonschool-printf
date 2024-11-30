CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = _printf

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
