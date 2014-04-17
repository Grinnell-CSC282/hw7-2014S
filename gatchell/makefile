#Adapted from makefile given in 213, originally produced by Janet Davis

CC = gcc #tells us to use GCC
CCOPTS = -c -g -Wall -ggdb #c flag tells it not to link
#g and ggdb flags produce debugging information, Wall turns on all warnings
LINKOPTS = -g
PROGRAMS = mycp myrm mytouch mymv myls # supplies which files we're using

all: $(PROGRAMS)

# makes each from their c file
% :: %.c
	$(CC) $(LINKOPTS) -o $@ $^

clean:
	rm -rf *.o *~ *.err *.out $(PROGRAMS)
#gets rid of the junk, including .0 files, err, out and ~ ending files
