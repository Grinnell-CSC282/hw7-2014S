# Makefile

# Acknowledgements: Structure from Makefile by Henry Walker 20 April 2008 
# http://www.cs.grinnell.edu/~walker/courses/161.sp14/modules/lists/Makefile
# http://www.cs.grinnell.edu/~walker/courses/161.sp14/modules/lists/prog-mgmt/Makefile
# http://www.chemie.fu-berlin.de/chemnet/use/info/make/make_14.html

SHELL = /bin/sh

# Use the gcc compiler
CC = gcc 

# Set compilation flags
CFLAGS = -ansi

  # Build rules
all:

  # List of program components, what other files they depend on and how to 
  # compile each 
main: main.o checkAnagram.o 
	$(CC) -o main main.o checkAnagram.o 

checkAnagram: checkAnagram.o 
	$(CC) -o checkAnagram checkAnagram.o 

 # Standard dependency for .o file
%.o: %.c %.h
	$(CC) $(CFLAGS) $<


# Rules for cleaning up
# "make clean" invokes this command
# Cleans directory 
   #(deletes object files, old emacs source versions, and core dumps)
.PHONY : clean
clean: 
	rm -f *.o *- core*


# Install (not working)
# Acknowledgement: http://www.chemie.fu-berlin.de/chemnet/use/info/make/make_16.html
# Something along the lines of

CC = gcc -O
INSTALL = /usr/local/bin/install -c
INSTALLDATA = /usr/local/bin/install -c -m 644

LIBS = 

CDEBUG = -g
CFLAGS = $(CDEBUG) -I. -I$(srcdir) $(DEFS) \
        -DDEF_AR_FILE=\"$(DEF_AR_FILE)\" \
        -DDEFBLOCKING=$(DEFBLOCKING)
LDFLAGS = -g

TARGET = main

prefix = /usr/local

# Prefix for each installed program, 
# normally empty or `g'.
binprefix = 

# Source directory
srcdir = .

# The directory to install tar in.
bindir = $(prefix)/bin

# The directory to install the info files in.
infodir = $(prefix)/info


all:    tar rmt tar.info

tar: 	$(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

rmt:    rmt.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ rmt.c

tar.info: tar.texinfo
	makeinfo tar.texinfo


install: all
	$(INSTALL) tar $(bindir)/$(binprefix)tar
	-test ! -f rmt || $(INSTALL) rmt /etc/rmt
	$(INSTALLDATA) $(srcdir)/tar.info* $(infodir)

# Uninstall
# http://felixcrux.com/blog/creating-basic-makefile

uninstall:
	-rm $(BINDIR)/$(TARGET)
