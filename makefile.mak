CC = g++
CFLAGS = -Wall -g

main.exe: main.o Car.o Vehicle.o
	$(CC) $(CFLAGS) -o main.exe main.o Calculator.o

main.o: main.cpp Car.h Vehicle.h
	$(CC) $(CFLAGS) -c main.cpp

Car.o: Car.h
Vehicle.o: Vehicle.h