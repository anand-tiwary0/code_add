#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
	if(argc!=4)
	{
		printf("usage: volume input_file output_file factor");
		return 1;
	}
	
	//opening input file in read mode
	FILE *music = fopen(argv[1],"r");
	if(music == NULL)
	{
		printf("file not found or can't open file\n");
		return 2;
	}
	//opening output file in append mode
	FILE *output = fopen(argv[2],"w");
	if(output == NULL)
	{
		printf("could not open file\n");
		return 2;
	}
	
	float factor = atof(argv[3]);
	
	uint8_t header[HEADER_SIZE];
			fread(header,HEADER_SIZE,1,music);
			fwrite(header,HEADER_SIZE,1,output);
	//reading header file from input file and writing it to output file
	//reading other data from input file and factoring it and then putting it into output
		
	int16_t buffer;
		while(fread(&buffer, sizeof(int16_t),1,music))
			{
				buffer = factor * buffer;
				fwrite(&buffer, sizeof(int16_t),1,output);
			}
	
	//closing file
	fclose(music);
	fclose(output);
	
	return 0;
}
	