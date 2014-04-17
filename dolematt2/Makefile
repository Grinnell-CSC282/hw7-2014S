SHELL = /bin/sh
CFLAGS = -Wall -ggdb3
CC = gcc
OBJ = hyssop.o button_functions.o
GTKLIBS = `pkg-config --libs --cflags gtk+-2.0`
LINK = $(CC) $(CFLAGS) $(GTKLIBS)

hyssop : $(OBJ)
	$(LINK) -o $@ $^
%.o : %.c
	$(LINK) -c $@ $^

.PHONY : clean
clean : 
	-rm -rf *.o

#References:
#http://www.gnu.org/software/make/manual/make.html#Makefile-Conventions
#http://kb.mozillazine.org/Makefile_for_packaging_an_extension
