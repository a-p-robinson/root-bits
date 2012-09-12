###############################
# Makefile for new ROOT class
#
# APR: 07/09/12
###############################

# Source directory and bin directory
BIN    = ../bin/
SRC    = .

# Include the platform specific options
PLTFMOPT=Makefile.$(shell uname)
include $(PLTFMOPT)

# Turn on debugging
#CCFLAG   += -g

# make all
all: testClass MyClass.so

#### Programs ##################################################################################
# testClass - standalone program to test new class
testClassOBJ =	testClass.o \
		MyClass.o \
		MyClassDict.o

testClass:	$(testClassOBJ)
		$(CC) $(testClassOBJ) $(ROOTLIB) \
		-o $(BIN)/testClass

#### Shared Libraries #########################################################################
# MyClass - shared library (use to read MyClass from cint)
MyClass.soOBJ =	MyClass.o MyClassDict.o

MyClass.so:	$(MyClass.soOBJ)
		$(CC) -shared $(MyClass.soOBJ) $(ROOTLIB) \
		-o $(BIN)/MyClass.so

#### Objects ###################################################################################
# MyClass object
MyClass.o:		$(SRC)/MyClass.C $(SRC)/MyClass.h 
			$(CC) $(CCFLAG) $(ROOTINC) -c $(SRC)/MyClass.C -o MyClass.o

# MyClass Dictionary object
MyClassDict.o:		$(SRC)/MyClass.h $(SRC)/MyClassLinkDef.h
			$(ROOTSYS)/bin/rootcint -f MyClassDict.C -c MyClass.h MyClassLinkDef.h
			$(CC) $(CCFLAG) $(ROOTINC) -c $(SRC)/MyClassDict.C -o MyClassDict.o
# testClass object
testClass.o:		$(SRC)/testClass.C
			$(CC) $(CCFLAG) $(ROOTINC) -c $(SRC)/testClass.C -o testClass.o

### Cleaning ###################################################################################
clean:		
		rm -f *.o
		rm -f core
		rm -f *%
		rm -f a.out
		rm -f *.so
		rm -f *Dict*.C
		rm -f *Dict*.h
