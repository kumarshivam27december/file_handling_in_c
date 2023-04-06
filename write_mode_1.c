#include <stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("karan.txt","w");
	fprintf(fp,"\n3 shiv cse 90000");
	
	
	

	// close the file
	fclose(fp);
}
