all: main.exe

quadraticroots.o: quadraticroots.h quadraticroots.c
	gcc -c quadraticroots.c -o quadraticroots.o 

main.exe: quadraticroots.h quadraticroots.o main.c
	gcc quadraticroots.o main.c -o main.exe -lm

clean:
	rm -f *.o *.exe