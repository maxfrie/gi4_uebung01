#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]) 
{
  execv(argv[1], argv+1);

  return 0;
}
