PROG := leetcode
CXXFILES := reverse_words.cpp RPN.cpp main.cpp
CXXFLAGS := -Wall -Wextra -g
LDFLAGS :=

OBJFILES := $(CXXFILES:.cpp=.o)

$(PROG) : $(OBJFILES)
	$(LINK.cc) $(LDFLAGS) -o $@ $^

clean :
	rm -f $(PROG) $(OBJFILES)
