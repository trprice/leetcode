PROG := leetcode
CXXFILES := reverse_words.cpp main.cpp
CXXFLAGS := -Wall -Wextra -g
LDFLAGS :=

CXX := clang++

OBJFILES := $(CXXFILES:.cpp=.o)

$(PROG) : $(OBJFILES)
	$(LINK.cc) $(LDFLAGS) -o $@ $^

clean :
	rm -f $(PROG) $(OBJFILES)
