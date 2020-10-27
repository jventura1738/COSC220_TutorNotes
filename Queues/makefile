# Justin Ventura COSC220
# Sessioni 10/27/20

# Makefile variables:
gc = g++ -c -std=c++11
go = g++ -o

main: main.o
	$(go) main main.o 
	#queue.o

main.o: main.cpp #queue.o
	$(gc) main.cpp

# queue.o: queue.h queue.cpp
# 	$(gc) queue.cpp

clean:
	rm -rf *.o main