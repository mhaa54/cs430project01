CC = gcc
CFLAGS = -g -O2 -Wno-format -Wno-unused-result
OBJECTS = ppmrw_main.o ppmrw_io.o

ppmrw : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o ppmrw

ppmrw_main.o : ppmrw_main.c
	$(CC) $(CFLAGS) -c ppmrw_main.c

ppmrw_io.o : ppmrw_io.c
	$(CC) $(CFLAGS) -c ppmrw_io.c

clean :
	rm ppmrw ppmrw_main.o ppmrw_io.o

