#include <stdio.h>
#include <unistd.h>

int main(){
  int x;

  x = fork();

  if( x == 0 ) {
    printf("\n@@@@");
    x++;
  } else {
    printf("\n****");
  }
  
  printf("\nProcesso %d, x = %d\n", getpid(), x);

  return 0;
}
