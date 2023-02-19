#include <stdio.h>
#include <stdint.h>
typedef uint8_t u08;
u08 data[8]={10,15,32,14,80,92,56,89};
struct book
{
	  char name[20];
	  u08  size;
	  u08 hild; 
};

typedef struct book Tbook;


int main(int argc, char **argv)
{
  Tbook one;
  Tbook* Pone;
  Pone=NULL;
  Pone=&one;
  (*Pone).hild=60;
  
  Pone->size=90;
  printf("%d\n",(*Pone).hild);
  printf("%d\n",Pone->size);
  
	return 0;
}

