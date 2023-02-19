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
 Tbook oneBook;
 Tbook* PoneBook=NULL;
 PoneBook=&oneBook;
 PoneBook->size=156;
 PoneBook->hild=89;
 
 printf("%d  %d",PoneBook->size,PoneBook->hild);
 
 

	return 0;
}

