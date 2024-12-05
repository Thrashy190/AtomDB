CC = gcc
CFLAGS = -Wall -Wextra -I./include
LDFLAGS =

SRCS = $(wildcard src/**/*.c src/*.c)
OBJS = $(SRCS:.c=.o)
TARGET = atom_db

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean