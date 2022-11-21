#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isEmpty(char * str);
void removeEmptySpaces(FILE * src, FILE * temp);

int main(){

	FILE *output;
	FILE *temp1;
	FILE *temp2;
	FILE *ogfile1;
	FILE *ogfile2;

	char namefile1[9] = "first.txt";
	//canf("First file: ", &namefile1);
	char namefile2[10] = "second.txt";
	//scanf("Second file: ", &namefile2);


	ogfile1 = fopen("first.txt","r");
	ogfile2 = fopen("second.txt","r");
	
	printf("hi30\n");

	temp1 = fopen("output1.txt","r+");
	fputs("aaa", temp1);
	printf("hi 32 \n");
	temp2 = fopen("output2.txt","r+");
	printf("hi\n");

	output = fopen("output.txt","r+");
	
	if(ogfile1 == NULL) return 0;
	if(ogfile2 == NULL) return 0;
	if(temp1 == NULL) return 0;
	if(temp2 == NULL) return 0;	
	if(output == NULL) return 0;


	removeEmptySpaces(ogfile1, temp1);
	removeEmptySpaces(ogfile2, temp2);
	
	rewind(temp1);
	char c;
	do{
	c = fgetc(temp1);
	printf("%c", c);
	}while(c != EOF);
	
	rewind(temp2);
	do{
	c = fgetc(temp2);
	printf("%c", c);
	}while(c != EOF);
	
	do{
	c = fgetc(output);
	printf("%c", c);
	}while(c != EOF);

	printf("\n");

	fclose(output);
	fclose(temp1);
	fclose(temp2);
}
	
void removeEmptySpaces(FILE * src, FILE * temp)
{
	char buffer[256];
	while((fgets(buffer, 256, src) != NULL))
	{
	//buffer[strcspn(buffer, "\n")] = 0;
	strtok(buffer, "\n");
		if(!isEmpty(buffer))
		{
			printf("Writing to file!\n");
			fputs(buffer, temp);
		}	
	}
}

bool isEmpty(char * str)
{
	char c;
	do {
	printf("Checking string: %s\n", str);
	c = *(str++);
	//printf("next char: %c\n", c);
	if(c != ' ' && c != '\t' && c != '\n') return false;	
	} while(c != '\0');
	return true;
}
