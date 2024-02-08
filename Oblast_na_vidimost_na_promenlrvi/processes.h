#ifndef _PROCESSES_H_
#define _PROCESSES_H_

struct Process {
  int ID;
  char name[30];
};

extern struct Process processes[5];
extern int processescount;

int createNewProcess(const char process_name[30]);
void stopProcess(int Id);

#endif
