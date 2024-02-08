#include <string.h>
#include <limits.h>
#include "processes.h"

static int id = 0;
int processescount = 1;
struct Process processes[5];

static int nextprocessid() {
  if (id == INT_MAX) {
    return 0;
  }
  id += 1; 
  return id;
}

int createNewProcess(const char process_name[30]) {
  struct Process newprocess;
  newprocess.ID = nextprocessid();

  if (newprocess.ID == 0 || processescount > 5) {
    return 0;
  }

  strcpy(newprocess.name, process_name);
  processes[processescount - 1] = newprocess;
  processescount++;

  return newprocess.ID;
}

void stopProcess(int Id) {
  for (int i = 0; i < processescount; i++) {
    if (processes[i].ID == Id) {
      for (int j = i; j < processescount - 1; j++) {
        processes[j] = processes[j + 1];
      }
      processescount--;
      break;
    }
  }
}
