#include<stdio.h>
#define COMMAND(Name, Type){ \
  Type ## _ ## Name ## _command; \
}
#define DEFINE_COMMAND(Name, Type){ \
void Type ## _ ## Name ## _command(void); \
}

void internal_quit_command()
{
  printf("\nYes!");
}
void external_quit_command()
{
  printf("\nNo!");
}

void main()
{
  DEFINE_COMMAND(quit, internal);
  DEFINE_COMMAND(quit, external);
  internal_quit_command();
  external_quit_command();
}