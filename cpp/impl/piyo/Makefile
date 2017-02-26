# gcc test
#

ARCHIVE=piyo.a

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

piyo.o: ../piyo/piyo.h ../hoge/hoge.h ../piyo/piyo_impl.cc
piyo.o: ../hoge/hoge_impl.cc ../hoge/hoge.h
