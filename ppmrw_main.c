#include "ppmrw_io.h"

int main(int argc, char *argv[])
{
	unsigned char *imageR = NULL, *imageG = NULL, *imageB = NULL;
	int height, width, rs;

	/*
	 * Validate input arguments
	 */
	if ( argc < 4 )
	{
		printf("Invalid arguments.\nUsage: ppmrw <type of ppm to write> <input file name> <output file name>\n");
		return ERROR;
	}
	
	/*
	 * Validate given ppm type to write
	 */
	if( strcmp(argv[1], "3") == 0 )
	{
		/*
		 * read ppm file, memory will be allocated inside the function
		 */
		rs = readPPM(argv[2], &imageR, &imageG, &imageB, &height, &width);
		
		if ( rs == ERROR)
		{
			return ERROR;
		}
		
		/*
		 * Write as P3
		 */
		writePPM3(imageR, imageG, imageB, height, width, argv[3]);
	}
	else if( strcmp(argv[1], "6") == 0 )
	{
		/*
		 * read ppm file, memory will be allocated inside the function
		 */
		rs = readPPM(argv[2], &imageR, &imageG, &imageB, &height, &width);
		
		if ( rs == ERROR)
		{		if ( rs == ERROR)
		{
			return ERROR;
		}
			return ERROR;
		}
		
		/*
		 * Write as P6
		 */
		writePPM6(imageR, imageG, imageB, height, width, argv[3]);
	}
	else
	{
		printf("Invalid type of ppm to write\n");
		return ERROR;
	}
	
	/*
	 * Free allocated memory
	 */
	free(imageR);
	free(imageG);
	free(imageB);
		
	return SUCCESS;
}
