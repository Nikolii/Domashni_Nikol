all: taskmanager.exe

processes.o: processes.c processes.h
	gcc -c processes.c -o processes.o 

taskmanager.exe: taskmanager.c processes.h processes.o
	gcc taskmanager.c processes.o -o taskmanager.exe

clean: 
	rm -f *.o *.exe