# Author : Drake
# License : BSD 3-Clause
# Description
# a program likes DOS PC-Tools
APP = pctools
include .cross

CC = $(CROSS)cc
CXX = $(CROSS)g++
LD = $(CROSS)ld
INCLUDES = -I.
LIBS = -L. -lncurses
CFLAGS = $(LIBS)
CXXFLAGS = $(LIBS)

all:	pctools

pctools:
	$(CC) -c -o $(APP).o $(APP).c $(CFLAGS)
	$(LD) -o $(APP) $(APP).o

clean:
	rm *.o
	rm $(APP)
