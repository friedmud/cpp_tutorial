METHOD ?= opt

appname := inherit
full_appname := $(appname)-$(METHOD)

CXX ?= g++

srcfiles := $(shell find . -name "*.C")
objects	 := $(patsubst %.C, %-$(METHOD).o, $(srcfiles))

all: $(full_appname)

$(appname)-opt: $(objects)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -g -O3 -o $(full_appname) $(objects) $(LDLIBS)

$(appname)-dbg: $(objects)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -g -o $(full_appname) $(objects) $(LDLIBS)

%-opt.o: %.C
	$(CXX) -c $(CXXFLAGS) $(LDFLAGS) -g -O3 -MMD -MP -MF $@.d -MT $@ $< -o $@ $(LDLIBS)

%-dbg.o: %.C
	$(CXX) -c $(CXXFLAGS) $(LDFLAGS) -g -MMD -MP -MF $@.d -MT $@ $< -o $@ $(LDLIBS)

clean:
	rm -f *.o
	rm -f $(objects)
	rm -f $(full_appname)
	rm -rf *.d
	rm -f *~*

-include $(patsubst %, %-opt.o.d, $(basename $(srcfiles)))
