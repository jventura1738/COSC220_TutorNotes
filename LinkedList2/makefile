# Justin Ventura COSC220
# Sessioni 10/20/20

# Makefile variables:
gc = g++ -c -std=c++11
go = g++ -o

main: main.o
	$(go) main main.o List.o Node.o

main.o: main.cpp List.o Node.o
	$(gc) main.cpp

List.o: List.h List.cpp Node.o
	$(gc) List.cpp

Node.o: Node.h Node.cpp
	$(gc) Node.cpp

clean:
	rm -rf *.o main

# main: list.o main.o
# 	$(go) main list.o main.o

# main.o: list.cpp main.cpp
# 	$(gc) main.cpp

# list.o: list.h list.cpp
# 	$(gc) list.cpp

# clean:
# 	rm -rf *.o main