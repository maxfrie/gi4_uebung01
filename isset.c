#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]) 
{
 if(getenv(argv[1]) != NULL) return 1;
 else return 0;
}
