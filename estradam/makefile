CFLAGS= -Wall -g

mainmain: mainmain.o file.o
	$(CC) $(CFLAGS) -o $@ $^
mainmain.o: utils.h
file.o: utils.h
