#include <stdio.h>
#include <stdint.h>
#include <string.h>
typedef uint8_t u08;
u08 data[8]={10,15,32,14,80,92,56,89};
char str[30];

 void unwhite(const char* str)
 {
	for(int i ; i<strlen(str) ; i++)
	{
		
		if (str[i]!=' ')
		{
			printf("%c",str[i]);
			
		}
		
	}
	 
 }
 

int main(int argc, char **argv)
{

  gets(str);
  unwhite(str);
  
	return 0;
}

