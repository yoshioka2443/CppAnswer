# Auto detect by OS (Mac: clang++, Linux: g++)
# you can also specify the compiler directly like "CXX := g++"
CXX					:= Auto

BUILD_TYPE			:= Debug

PROJECT				:= day1-2

TARGET				:= main_$(PROJECT)
SRCDIR				:= src/$(PROJECT)

BUILDDIR			:= obj
TARGETDIR			:= bin
OUTPUTDIR			:= output

# extensions
SRCEXT				:= cpp
DEPEXT				:= d
OBJEXT				:= o

# flags
CXXFLAGS			:= -MMD -MP -std=c++14
CXX_DEBUG_FLAGS		:= -Wall -g -O0
CXX_RELEASE_FLAGS	:= -s -O2
LDFLAGS				:=
INCLUDE				:= -I./common

#---------------------------------------------------------------------------------
# DO NOT EDIT BELOW THIS LINE
#---------------------------------------------------------------------------------
UNAME := $(shell uname)

ifeq ($(CXX), Auto)
	ifeq ($(UNAME), Linux)
		CXX := g++
	else ifeq ($(UNAME), Darwin)
		CXX := clang++
	else
		$(error unsupported OS)
	endif
endif

ifeq ($(BUILD_TYPE),Release)
	CXXFLAGS += $(CXX_RELEASE_FLAGS)
else ifeq ($(BUILD_TYPE),Debug)
	CXXFLAGS += $(CXX_DEBUG_FLAGS)
else
	$(error buildtype must be release, debug, profile or coverage)
endif

sources			:= $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
objects			:= $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(subst $(SRCEXT),$(OBJEXT),$(sources)))
dependencies 	:= $(subst .$(OBJEXT),.$(DEPEXT),$(objects))

# Defauilt Make
all: directories $(TARGETDIR)/$(TARGET)

run: all
	@$(TARGETDIR)/$(TARGET)

# Remake
remake: cleaner all

# make directory
directories:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(OUTPUTDIR)

# remove directory for intermediate products
clean:
	@$(RM) -rf $(BUILDDIR)

# remove directories for both intermediate and final products
cleaner: clean
	@$(RM) -rf $(TARGETDIR)

-include $(dependencies)

# generate binary by linking objects
$(TARGETDIR)/$(TARGET): $(objects)
	@$(CXX) $(CXXFLAGS) -o $(TARGETDIR)/$(TARGET) $^ $(LIBS)

# generate objects by compiling sources
# save dependencies of source as .d
$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

# Non-File Targets
.PHONY: all run remake clean cleaner
