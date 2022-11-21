#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isEmpty(char * str);
void removeEmptySpaces(FILE * src, FILE * temp);

int main(){
	FILE *com;
	FILE *rec;
	
	com = fopen("com.txt","r");
	rec = fopen("rec.txt","r");
	
	if(com == NULL) return 0;
	if(rec == NULL) return 0;
	
	for(int i = 1; i < 6; i++)
	{
	char buffer[256];
	rewind(com);
	    while((fgets(buffer, 256, com) != NULL))
	    {
	    buffer[strcspn(buffer, "\n")] = 0;
	    //strtok(buffer, "\n");
	    
	    char c;
		c = *(buffer);
		if(c != (i + '0') continue;
		c = *(buffer+1);
		if(c != '\n') continue;
		
		printf("Found Line!");
		for(int j = 0; j < 33; j++)
		{
		printf("The following records were: ");
		fgets(newbuffer, 256, com)
		char newbuff[255];
		fgets(newbuffer, 256, com)
		fputc(newbuffer, rec);
		c = *(newbuffer);
		if(c != (i+1 + '0') continue;
		c = *(buffer+1);
		if(c != '\n') continue;
		break;
		}
	}
	printf("The Output: \n");
}
	
void removeEmptySpaces(FILE * src, FILE * temp)
{
	char buffer[256];
	while((fgets(buffer, 256, src) != NULL))
	{
		if(!isEmpty(buffer))
		{
			fputs(buffer, temp);
		}	
	}
}

bool isEmpty(char * str)
{
	char c;
	do {
	c = *(str++);
	if(c != ' ' && c != '\t' && c != '\n') return false;	
	} while(c != '\0');
	return true;
}
