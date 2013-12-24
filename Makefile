CXX = u++					# compiler
CXXFLAGS = -g -Wall -Wno-unused-label -MMD -multi
MAKEFILE_NAME = ${firstword ${MAKEFILE_LIST}}	# makefile name

OBJECTS = Card.o Table.o Player.o main.o
DEPENDS = ${OBJECTS:.o=.d}			# substitute ".o" with ".d"
EXEC = durak

.PHONY : clean

all : ${EXEC}					# build all executables

${EXEC} : ${OBJECTS}
	${CXX} ${CXXFLAGS} $^ -o $@

${OBJECTS} : ${MAKEFILE_NAME}			# OPTIONAL : changes to this file => recompile

-include ${DEPENDS}

clean :						# remove files that can be regenerated
	rm -f *.d *.o ${EXEC}
