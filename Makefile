.PHONY: all clean

.SUFFIXES: .c .prg

all: cgetc.prg cputc.prg get_tv.prg set_tv.prg joystick.prg kbhit.prg vera.prg videomode.prg vpokevpeek.prg waitvsync.prg

clean:
	rm -f *.prg *.o *.s

# Generic rule for building foo.prg from foo.c
.c.prg:
	cl65 -t cx16 -o $@ $< cx16.lib

cgetc.prg:	cgetc.c

cputc.prg: cputc.c 

get_tv.prg: get_tv.c 

set_tv.prg: set_tv.c 

joystick.prg: joystick.c 

kbhit.prg: kbhit.c 

vera.prg: vera.c 

videomode.prg: videomode.c 

vpokevpeek.prg: vpokevpeek.c 

waitvsync.prg: waitvsync.c

