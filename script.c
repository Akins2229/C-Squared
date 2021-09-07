#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

typedef enum { false, true } boolean;

//starts with
int starts_with(const char *a, const char *b)
{
   if(strncmp(a, b, strlen(b)) == 0) return 1;
   return 0;
}

void c_squared(void) {

    //variable init
  char str[]="";

  printf("C^2 v1.0-beta>>>\n");

  scanf("%s", str);

  boolean run_state = true;

  while(run_state) {
    //help
    char *token;
    if(starts_with(str, "-help") || starts_with(str, "-h")) {
      printf("-help [-h]   -   displays a list of commands and descriptions of them\n-run [-r]   -   runs a given file, or runs at main of directory\n-quit [-q]   -   quits c^2 and ends all running processes");
    }//end if

    //run
    else if(starts_with(str, "-run") || starts_with(str, "-r")) {
      printf("do stuff");
    }

    else if(starts_with(str, "-quit") || starts_with(str, "-q")) {
      printf("...\n");
      run_state = false;
      return;
    }
  }
  return;

  return;
}