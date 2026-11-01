
# ==========================================
# C++ DSA Practice Repository - Makefile
# ==========================================

# Compiler configuration
CXX       ?= g++
CXXFLAGS  ?= -std=c++17 -Wall -Wextra -Wpedantic
CPPFLAGS  ?=
LDFLAGS   ?=
LDLIBS    ?=

# Directories
BUILD_DIR := build

# Program sources
$(BUILD_DIR)/linear_search: arrays/LinearSearch.cpp
$(BUILD_DIR)/reverse_array: arrays/ReverArray.cpp
$(BUILD_DIR)/hello: arrays/hello.cpp

PROGRAMS := \
	$(BUILD_DIR)/linear_search \
	$(BUILD_DIR)/reverse_array \
	$(BUILD_DIR)/hello

DEPFILES := $(PROGRAMS:%=%.d)

# Default target
.DEFAULT_GOAL := all

# Targets that are not actual files
.PHONY: all check test clean help

# ==========================================
# Build all programs
# ==========================================

all: $(PROGRAMS)

# Create build directory
$(BUILD_DIR):
	mkdir -p $@

# ==========================================
# Compilation rules
# ==========================================

$(BUILD_DIR)/linear_search: arrays/LinearSearch.cpp | $(BUILD_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -MMD -MP \
	-MF $(BUILD_DIR)/linear_search.d \
	$< $(LDFLAGS) $(LDLIBS) -o $@

$(BUILD_DIR)/reverse_array: arrays/ReverArray.cpp | $(BUILD_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -MMD -MP \
	-MF $(BUILD_DIR)/reverse_array.d \
	$< $(LDFLAGS) $(LDLIBS) -o $@

$(BUILD_DIR)/hello: arrays/hello.cpp | $(BUILD_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -MMD -MP \
	-MF $(BUILD_DIR)/hello.d \
	$< $(LDFLAGS) $(LDLIBS) -o $@

# Automatically include generated header dependencies
-include $(DEPFILES)

# ==========================================
# Automated tests
# ==========================================

check: all
	@set -eu; \
	echo "Running tests..."; \
	printf '3\n' | ./$(BUILD_DIR)/linear_search | grep -Fq 'enter the key to find :3'; \
	printf '999\n' | ./$(BUILD_DIR)/linear_search | grep -Fq 'enter the key to find :-1'; \
	test "$$(./$(BUILD_DIR)/reverse_array)" = '9,8,7,6,5,4,3,2,1,'; \
	test "$$(./$(BUILD_DIR)/hello)" = '9,8,7,6,5,4,3,2,1,'; \
	echo "All checks passed."

# Alias for check
test: check

# ==========================================
# Clean generated files
# ==========================================

clean:
	rm -rf $(BUILD_DIR)
	@echo "Build files removed."

# ==========================================
# Help
# ==========================================

help:
	@echo "C++ DSA Practice - Available Commands"
	@echo ""
	@echo "  make          Build all programs"
	@echo "  make check    Build and run tests"
	@echo "  make test     Same as make check"
	@echo "  make clean    Remove build directory"
	@echo "  make help     Show available commands"
	@echo ""
	@echo "Compiler: $(CXX)"
	@echo "Flags:    $(CXXFLAGS)"
