CXX=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp LinkedList.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=list

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp
	$(CXX) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
