#
# $Id: Makefile,v 1.1 2012/04/28 05:21:33 urs Exp $
#

RM = rm -f

programs = self

.PHONY: all
all: $(programs)

.PHONY: test
test: self
	./self > self.out
	diff self.c self.out

.PHONY: clean
clean:
	$(RM) $(programs) self.out *.o core
