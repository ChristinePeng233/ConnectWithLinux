#include "proc.h"
#define SIZE 102
#define STYLE '#'
#define ARR '>'
#include <unistd.h>
#include<string.h>

void process()
{
  const char *lable ="|/-\\";
  char bar[SIZE];
  memset(bar, '\0', sizeof(bar));
  int i = 0;
  while(i <= 100)
  {
    printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    bar[i++] = STYLE;
    if(i != 100)  bar[i] = ARR;
    usleep(100000);
  }
  printf("\n");

}
