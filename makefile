CC = gcc
CFLAGS = -Wall -g
DEPS = myMath.h

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS)

all: mymaths mymathd mains maind 
mymaths: basicMath.o power.o
	ar rcs libmyMath.a basicMath.o power.o 

mymathd: basicMath.o power.o
	$(CC) -fPIC -shared -o libmyMath.so basicMath.o power.o 

mains: libmyMath.a main.c
	$(CC) -c -Wall main.c
	$(CC) -o mains main.o libmyMath.a

maind: libmyMath.so main.c
	$(CC) -c -Wall main.c 
	$(CC) -o maind main.o libmyMath.so 

.PHONY: clean

clean:
	rm -f *.o *.a *.so *.out mains maind	

