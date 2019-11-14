CC = gcc
CFLAGS = -Wall -g
DEPS = myMath.h

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS)

all: libmyMath.so libmyMath.a mains maind 
mymaths: basicMath.o power.o 
	ar rcs libmyMath.a basicMath.o power.o 

mymathd: basicMath.o power.o 
	$(CC) -fPIC -shared -o libmyMath.so basicMath.o power.o 

mains: libmyMath.a main.c
	$(CC) -c main.c
	$(CC) -o mains main.o libmyMath.a

maind: libmyMath.so main.c
	$(CC) -c main.c
	$(CC) -o maind main.o libmyMath.so

clean:
	rm -f *.o *.a *.so mains maind	

