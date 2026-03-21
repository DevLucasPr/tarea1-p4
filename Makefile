IDIR = include
SDIR = src
ODIR = obj

CXX = g++
CXXFLAGS = -I$(IDIR) -std=c++98 -Wall -Wextra -pedantic

BIN = main

SRCS = $(wildcard $(SDIR)/*.cpp)
OBJS = $(patsubst $(SDIR)/%.cpp,$(ODIR)/%.o,$(SRCS))

.PHONY: all principal clean valgrind

all: $(BIN)

principal: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS) $(LDLIBS)

$(ODIR)/%.o: $(SDIR)/%.cpp | $(ODIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(ODIR):
	mkdir -p $(ODIR)

entrega:
	tar -czvf 03_lab0.tar.gz $(SRCS) $(IDIR) Makefile

clean:
	rm -rf $(ODIR) $(BIN)

valgrind: $(BIN)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(BIN)