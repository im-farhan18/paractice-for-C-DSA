CXX ?= g++
CXXFLAGS := -std=c++17 -Wall -Wextra
BUILD_DIR := build

PROGRAMS := linear_search reverse_array hello

.PHONY: all check clean

all: $(PROGRAMS:%=$(BUILD_DIR)/%)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/linear_search: arrays/LinearSearch.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/reverse_array: arrays/ReverArray.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR)/hello: arrays/hello.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

check: all

	@printf '3\n' | ./$(BUILD_DIR)/linear_search | grep -q 'enter the key to find :3'
	@printf '999\n' | ./$(BUILD_DIR)/linear_search | grep -q 'enter the key to find :-1'
	@test "$$(./$(BUILD_DIR)/reverse_array)" = '9,8,7,6,5,4,3,2,1,'
	@test "$$(./$(BUILD_DIR)/hello)" = '9,8,7,6,5,4,3,2,1,'
	@echo "All checks passed."

clean:
	rm -rf $(BUILD_DIR)
