CC=g++
CFLAGS=-std=c++11 
DEFINES=-DBOOST_LOG_DYN_LINK
all: pump

pump: main.o czas.o file_interface.o serie.o week.o
		$(CC) main.o czas.o file_interface.o serie.o week.o -o pump

main.o: main.cpp
		$(CC) $(CFLAGS) -c main.cpp

czas.o: czas.cpp
		$(CC) $(CFLAGS) -c czas.cpp

file_interface.o: file_interface.cpp
		$(CC) $(CFLAGS) -c file_interface.cpp

serie.o: serie.cpp
		$(CC) $(CFLAGS) -c serie.cpp

week.o: week.cpp
		$(CC) $(CFLAGS) -c week.cpp

clean:
		rm -rf *.o pump
