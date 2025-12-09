case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C17"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = simple_i18n$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C17_c.obj 

OLDOBJECTS =  sp557.o sp557d.o ar528.o ar528d.o ar558.o ar558d.o na529.o na529d.o \
	na559.o na559d.o sp555.o sp555d.o ar541.o ar541d.o li531.o li531d.o \
	it560.o it560d.o ar554.o ar554d.o re552.o re552d.o in539.o in539d.o \
	to556.o to556d.o dy551.o dy551d.o fi537.o fi537d.o li547.o li547d.o \
	ge543.o ge543d.o se544.o se544d.o ar542.o ar542d.o dy546.o dy546d.o \
	cu532.o cu532d.o tr536.o tr536d.o bo553.o bo553d.o ta540.o ta540d.o \
	un550.o un550d.o bo538.o bo538d.o ch548.o ch548d.o ac533.o ac533d.o \
	bi545.o bi545d.o dy549.o dy549d.o co530.o co530d.o ba534.o ba534d.o \
	co535.o co535d.o 

all: Cobj17.o

Cobj17.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj17.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

