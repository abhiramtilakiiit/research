PYTHIA_DIR ?= /usr/local/venv
CXXFLAGS = "-I$(PYTHIA_DIR)/include"
LDFLAGS = "-L$(PYTHIA_DIR)/lib"
CXX = g++

proton_collision: proton_collision.cc
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $@.cc -o $@
