# Makefile

CC = g++
CFLAGS = -std=c++11
SRCS = main.cpp Car.cpp Vehicle.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = car_race

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
