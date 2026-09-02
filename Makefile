# Convenience wrapper around the CMake build.
BUILD_DIR ?= build

.PHONY: all configure clean list

all: configure
	@cmake --build $(BUILD_DIR) -j

configure:
	@cmake -S . -B $(BUILD_DIR) -DCMAKE_BUILD_TYPE=RelWithDebInfo

list: all
	@echo "Built executables:" && ls -1 $(BUILD_DIR)/bin

clean:
	@rm -rf $(BUILD_DIR)
