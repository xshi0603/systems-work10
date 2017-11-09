#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

static void sighandler(int signo) {

  if (signo == SIGINT) {

    printf("Exited due to SIGINT signal\n");
    exit(0);

  }

  else if (signo == SIGUSR1) {

    printf("SIGUSR1 recieved. Parent Process PID: %d\n", getpid());

  }

}

int main () {

  signal( SIGINT, sighandler );
  signal( SIGUSR1, sighandler );

  while (1) {
    printf( "PID:%d\n", getpid());
    sleep(1);
  }
  
  return 0;
}
      
