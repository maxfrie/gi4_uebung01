#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
  int i;
  for(i = 1; i < argc; i++)
  {
	printf(argv[i]);
	if(i + 1 == argc) printf("\n");
	else printf(" ");
  }
  return 0;
}
