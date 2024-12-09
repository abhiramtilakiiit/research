PYTHIA_DIR ?= /usr/local/venv
CXXFLAGS = -O2 -std=c++11 -pedantic -W -Wall -Wshadow -fPIC -pthread -I$(PYTHIA_DIR)/include
LDFLAGS = -L$(PYTHIA_DIR)/lib -Wl,-rpath,$(PYTHIA_DIR)/lib
ROOTFLAGS = $(CXXFLAGS) `root-config --cflags`
ROOTLDFLAGS = $(LDFLAGS) `root-config --glibs`
LIBS = -lpythia8
CXX = g++

all: proton_collision momentum_histogram root_tree

proton_collision: proton_collision.cc
		$(CXX) $(CXXFLAGS) $@.cc $(LDFLAGS) $(LIBS) -o $@

momentum_histogram: momentum_histogram.cc
		$(CXX) $(CXXFLAGS) $@.cc $(LDFLAGS) $(LIBS) -o $@

root_tree: root_tree.cc
		$(CXX) $(ROOTFLAGS) $@.cc $(ROOTLDFLAGS) $(LIBS) -o $@
