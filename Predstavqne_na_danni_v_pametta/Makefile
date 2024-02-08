all: table.exe safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

util.o: util.c util.h
	gcc -c util.c -o util.o

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

safeadd.exe: safeadd.c safeint.h safeint.o util.h util.o
	gcc safeadd.c safeint.o util.o -o safeadd.exe

safesubtract.exe: safesubtract.c safeint.h safeint.o util.h util.o
	gcc safesubtract.c safeint.o util.o -o safesubtract.exe

safemultiply.exe: safemultiply.c safeint.h safeint.o util.h util.o
	gcc safemultiply.c safeint.o util.o -o safemultiply.exe

safedivide.exe: safedivide.c safeint.h safeint.o util.h util.o
	gcc safedivide.c safeint.o util.o -o safedivide.exe

table.exe: table.c
	gcc table.c -o table.exe

clean:
	rm -f *.exe *.o