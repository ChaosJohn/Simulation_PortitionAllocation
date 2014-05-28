#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 

#define CAPACITY 10000 

typedef struct _EmptyBlock {
  int num; 
  int start; 
  int size; 
  struct _EmptyBlock *next; 
  struct _EmptyBlock *prev; 
} EmptyBlock, *EmptyBlockList, *EmptyBlockPointer; 


int 
main(int argc, 
    char **argv) {

  printf("hello\n"); 
  /*return EXIT_SUCCESS; */
  return 0; 
}
