#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include  "Read.h"
#include <sys/wait.h>
int main(int argc, char const *argv[]) {
char * InputBuffer;
InputBuffer=Read2();
int status=0;
pid_t pid;
//fflush(stdout);
/*
  printf("db    8    db d88888b db        o88b    d88b    88b  d88  d88888b \n" );
  printf("88    8    88 88      88      d8P  Y8  8P  Y8  88 YbdP 88 88 \n" );
  printf("88    8    88 88ooooo 88      8P      88    88 88  88  88 88ooooo\n" );
  printf("Y8   I8I   88 88ooooo 88      8b      88    88 88  88  88 88ooooo \n" );
  printf("8b   d8 8b d8 88      88      Y8b  d8  8b  d8  88  88  88 88 \n" );
  printf("8b88  8d88b   Y88888P Y88888P   Y88P    Y88P   YP  YP  YP Y88888P \n \n " );
  */
  while (InputBuffer>0) {
    //InputBuffer=Read();
    pid =fork();
    if(pid < 0)
    {
      perror("an error has ocured during the fork() creation \n");
      exit(1);
    }
    if(pid == 0)
    {
      execlp(InputBuffer,InputBuffer,NULL);//to null gt mpenei.
      //printf("end of exec\n");
    }
    else if(pid == 1)
    {
        printf("I'm the father and should be waiting\n");
    }
    pid_t wait(int *status);
    pid_t wait(int *status);
    while ((pid=wait(&status))>0);
    fflush(stdout);
    memset(InputBuffer,0,255);
    InputBuffer=Read2();

  }//END OF WHILE
  return 0;
}
