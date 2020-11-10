# Justin Ventura COSC220
# Sessioni 11/05/20

# Makefile variables:
gc = g++ -c -std=c++11
go = g++ -o

main: main.o
	$(go) main main.o

main.o: main.cpp BST.h BST.cpp BSTnode.h BSTnode.cpp
	$(gc) main.cpp

clean:
	rm -rf *.o main