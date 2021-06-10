#----------makefile Configuration for qpSWIFT-----------
#
#
#
#
#
#
#
#
#

CC = gcc

CFLAGS = -Wall

INCLUDES = -Ildl/include -Iamd/include -Iinclude

LDLIBS = -lm

qpSWIFT_OBJS = Auxilary.o Prime.o timer.o

LDL_OBJS = ldl.o 

AMD_OBJS = amd

LDFLAGS = -lm -lrt




#
#
#
#----------makefile configuration for qpSWIFT-----------
