#include <stdio.h>
#include "processes.h"

int main() {
  int option;

  while (1) {
    printf("\nMenu: \n1. Create process \n2. Return all processes \n3. Stop a process \n4. Exit");
    printf("\nEnter your option here: ");
    scanf("%d", &option);

    if(option == 1){
      char name_of_the_process[30];
      printf("\nEnter the name of the new process here: ");
      scanf("%s", name_of_the_process);
      int p = createNewProcess(name_of_the_process);
      printf("%d", p);
      if (p == 0) printf("\nThe maximum number of processes has been reached. To create a new process, one of the working ones must be stopped.");
      else printf("\nA new process has been created!");
    } 
    else if(option == 2){
      for (int i = 0; i < processescount - 1; i++) {
        printf("\nID: %d, Name: %s\n", processes[i].ID, processes[i].name);
      }
    } 
    else if(option == 3){
      int idd;
      printf("\nEnter process id to stop the process: ");
      scanf("%d", &idd);
      stopProcess(idd);
    } 
    else{
      printf("\nExit the program!");
      return 0;
    }
  }
}
