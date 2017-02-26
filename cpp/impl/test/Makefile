# gcc test
#

TARGET=test

CC=g++ -g -Wall

CFLAGS+= \
	-I.
CXXFLAGS+=$(CFLAGS)

SRC=$(wildcard *.cpp)

OBJ=$(SRC:.cpp=.o)

DEPLIB=hoge piyo

LIB_A=$(wildcard */*.a)
$(info $(LIB_A))

all : $(DEPLIB) $(TARGET)

.PHONY: $(DEPLIB)
$(DEPLIB):
	$(MAKE) -C ../$@
	mkdir -p $@
	cp -av ../$@/$@.a $@
	cp -av ../$@/*.h $@

$(TARGET) : $(OBJ) $(LIB_A)
	$(CC) -o $(TARGET) $(OBJ) $(LIB_A)

clean :
	-rm -f $(OBJ) $(TARGET)
	-rm -rf $(TARGET).dSYM
	-rm -rf $(DEPLIB)

start :
	./$(TARGET)

depend:
	makedepend -- $(CFLAGS) -- $(SRC)

# DO NOT DELETE

main.o: hoge/hoge.h piyo/piyo.h
