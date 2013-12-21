CXX = u++					# compiler
CXXFLAGS = -g -Wall -Wno-unused-label -MMD -multi
MAKEFILE_NAME = ${firstword ${MAKEFILE_LIST}}	# makefile name

OBJECTS = Table.o CardCollection.o main.o
#OBJECTS = config.o Printer.o VendingMachine.o WATCard.o WATCardOffice.o Student.o Bank.o NameServer.o BottlingPlant.o Truck.o Parent.o main.o # list of object files for assignment
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