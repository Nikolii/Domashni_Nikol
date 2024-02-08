#include<stdio.h>

int strlength(char *string) {
  int str_size = 0;
  for (str_size = 0; string[str_size] != '\0'; str_size++);
  return str_size;
  }

int strconcat(char *string_1, const char *string_2) {
    int i, j;
    for (i = 0; string_1[i] != '\0'; i++);
    for (j = 0; string_2[j] != '\0'; j++);
    if(i > 50 || j > 50) printf("\nThe strings are too long!");


    for (j = 0; string_2[j] != '\0'; j++) {
        string_1[i] = string_2[j];
        i++;
    }
    string_1[i] = '\0';

    printf("\n%s", string_1);
    return 0;
}

int strcompare(const char *string_1, const char *string_2) {
  for(int i = 0; ; i++) {
    if(string_1[i] > string_2[i])
      return 1;
    if(string_1[i] < string_2[i])
      return -1;
    if (string_1[i] == 0 && string_2[i] == 0)
      return 0;
  }
}