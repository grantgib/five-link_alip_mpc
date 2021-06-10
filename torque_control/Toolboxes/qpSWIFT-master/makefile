#----------makefile for qpSWIFT----------------------
#
# TARGETS
#	all : COMPILES libqpSWIFT.a, libldl.a, libamd.a, RUNQP
#
#	clean : Removes all the object files
#
#	purge : Removes all the object files and library files
#
#
#
#
#----------makefile for qpSWIFT----------------------

include qpSWIFT.mk


.PHONY: all
all: libqpSWIFT.a RUNQP


$(LDL_OBJS):
	(cd ldl ; $(MAKE) )
	ar -x ldl/libldl.a

$(AMD_OBJS):
	(cd amd; $(MAKE) )
	ar -x amd/libamd.a

libqpSWIFT.a: $(qpSWIFT_OBJS) $(LDL) $(AMD)
	$(CC) $(CFLAGS) 

RUNQP:
	$(CC) $(CFLAGS) $(INCLUDES) RUNQP.c Prime.c /home/abhi/Code/qpSWIFT1.0/qpSWIFT/ldl/src/ldl.c Auxilary.c timer.c $(LDFLAGS) $(LDLIBS) -o RUNQP


%.o : src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

Auxilary.o   :  include/GlobalOptions.h include/Prime.h
Prime.o      :  include/GlobalOptions.h include/
timer.o      :  include/GlobalOptions.h include/timer.h



.PHONY : test
test : RUNQP
RUNQP:  src/RUNQP/c libqpSWIFT.a
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)


.PHONY : clean
clean :
	(cd ldl		;	$(MAKE) clean)
	(cd amd     ;   $(MAKE) clean)
	-rm $(CLEAN_OBJS)


.PHONY : purge
purge :
	(cd ldl		;	$(MAKE) clean)
	(cd amd     ;   $(MAKE) clean)
	-rm $(CLEAN_OBJS) $(LIB_FILES)





#
#
#
#----------makefile for qpSWIFT---------------------