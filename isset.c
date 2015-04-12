#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]) 
{
  if(!(strcmp(argv[1], "-v")) && getenv(argv[2]) != NULL)
  {
      printf("%s\n", getenv(argv[2]));
      return 1;
  }
  else
  {
    if(getenv(argv[1]) != NULL) return 1;
  }
  
 return 0;
}
