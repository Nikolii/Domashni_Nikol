all: help.exe strlength.exe strconcat.exe strcompare.exe

help.exe: help.c 
	gcc help.c -o help.exe

strlength.exe: strlength.c mystrings.h mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe

strconcat.exe: strconcat.c mystrings.h mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.exe: strcompare.c mystrings.h mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o 

clean:
	rm -f *.exe *.o