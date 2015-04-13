#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]) 
{
  pid_t pid = fork();
  if(pid > 0) {
	printf("Prozess ID - parent: %d\n", getpid());
	printf("Prozess ID - child: %d\n", pid);
  }
  if(pid == 0)
	execv(argv[1], argv+1);

  return 0;
}
