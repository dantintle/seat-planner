CC=g++

#SOURCES=seat.h seat.cpp seat_main.cpp
#OBJECTS=$(SOURCES):.cpp=.o
#EXECUTABLE=seat

all: 
	$(CC) -o seat seat_main.cpp

seat: 

	$(CC) -c seat.cpp seat_main.cpp

clean:
	rm -f seat


