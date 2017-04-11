IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=-lm

_DEPS = headers.h
# $(patsubst pattern,replacement,text)
# Finds whitespace-separated words in text that match pattern and replaces them with replacement. 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hello.o arithmetics.o digit-reverse.o swap.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# the special macros $@ and $^, which are the left and right sides of the :
hello: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

# The -c flag says to generate the object file, 
# the -o $@ says to put the output of the compilation in the file named on the left side of the :, 
# the $< is the first item in the dependencies list
$(OBJ): $(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# The .PHONY rule keeps make from doing something with a file named clean.
.PHONY: clean

clean:
	rm -f $(ODIR)/%.o *~ core $(INCDIR)/*~ 