# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ajay/vpns_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ajay/vpns_ws/build

# Utility rule file for vps_gennodejs.

# Include the progress variables for this target.
include vps/CMakeFiles/vps_gennodejs.dir/progress.make

vps_gennodejs: vps/CMakeFiles/vps_gennodejs.dir/build.make

.PHONY : vps_gennodejs

# Rule to build all files generated by this target.
vps/CMakeFiles/vps_gennodejs.dir/build: vps_gennodejs

.PHONY : vps/CMakeFiles/vps_gennodejs.dir/build

vps/CMakeFiles/vps_gennodejs.dir/clean:
	cd /home/ajay/vpns_ws/build/vps && $(CMAKE_COMMAND) -P CMakeFiles/vps_gennodejs.dir/cmake_clean.cmake
.PHONY : vps/CMakeFiles/vps_gennodejs.dir/clean

vps/CMakeFiles/vps_gennodejs.dir/depend:
	cd /home/ajay/vpns_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ajay/vpns_ws/src /home/ajay/vpns_ws/src/vps /home/ajay/vpns_ws/build /home/ajay/vpns_ws/build/vps /home/ajay/vpns_ws/build/vps/CMakeFiles/vps_gennodejs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vps/CMakeFiles/vps_gennodejs.dir/depend

