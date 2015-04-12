#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
  int i = 0;
  while(1)
  {
    if(envp[i] != NULL)
    {
      printf(envp[i]);
      printf("\n");
      i++;
    }
    else break;
  }

  printf("\nAnzahl der Umgebungsvariablen: %d\n", i);
  return 0;
}
