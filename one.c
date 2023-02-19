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
int crc_chk ( unsigned char* data, unsigned char length )
  {
	register int j;
	register unsigned int reg_crc = 0xFFFF;
	while (length--)
	{
	  reg_crc ^= *data++;
	  for(j=0;j<8;j++)
	   {
		 if(reg_crc & 0x01)
	      {
		    reg_crc = (reg_crc >> 1) ^ 0xA001;
	      }
		else
	      {
		    reg_crc = reg_crc >> 1;
		  }
	   }
	}
	return reg_crc;
  }

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
 printf("CRC-%ud ",crc_chk(data,8));
	return 0;
}

