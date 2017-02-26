# gcc test
#

TARGET=hoge
ARCHIVE=$(TARGET).a

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

CFLAGS+= \
	-I../
CXXFLAGS+=$(CFLAGS)

all : $(ARCHIVE)

$(ARCHIVE) : $(OBJ)
	ar -rcv $(ARCHIVE) $(OBJ)

clean :
	rm -vf $(OBJ) $(ARCHIVE)

depend:
	makedepend -- $(CFLAGS) -- $(SRC)

# DO NOT DELETE

hoge.o: hoge.h hoge_impl.cc
