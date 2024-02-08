#include <stdio.h>
#include <string.h>

#include "schoolclass.h"

#include "schoolroom.h"

struct School {
  struct SchoolClass classes[20];
  struct SchoolRoom rooms[10];
};

int main() {
  struct School tues;

  return 0;
}



#ifndef _PERSON_H
#define _PERSON_H

struct Person {
  char name[20];
  char surname[20];
  int year;
};

#endif


#ifndef _SCHOOL_CLASS_H
#define _SCHOOL_CLASS_H
#include "person.h"

struct SchoolClass {
  struct Person students[26];
  char section;
  int class_number;
  struct Person teacher;
};

#endif


#ifndef _SCHOOL_ROOM_H
#define _SCHOOL_ROOM_H
#include "person.h"

struct SchoolRoom {
  int room_number;
  struct Person present_students[50];
};

#endif