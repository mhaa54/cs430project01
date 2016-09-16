# cs430project01
Project 01 for CS 430 Computer Graphics

This program read any ppm (P3/P6) and extract pixel planes inside memory buffer and write PPM as per user specified innput.

Plain PPM (P3) has each sample in the raster has white space before and after it. There must be at least one character of white space between any two samples, but there is no maximum. There is no particular separation of one pixel from another, just the required separation between the blue sample of one pixel from the red sample of the next pixel. 

Raw PPM (P6) has each sample in the raster without any whitespace. There is no white space between any two samples. There is no particular separation of one pixel from another.


Make the program with "make"
Clean it with "make clean"

Usage: ppmrw <type of ppm to write> <input file name> <output file name>

Type of ppm: 3/6
Input image should be 8 bit per channel.
