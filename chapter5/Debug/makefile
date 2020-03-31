################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include project5.9/src/subdir.mk
-include project5.9/Debug/src/subdir.mk
-include project5.8/src/subdir.mk
-include project5.8/Debug/src/subdir.mk
-include project5.7/src/subdir.mk
-include project5.7/Debug/src/subdir.mk
-include project5.4/src/subdir.mk
-include project5.4/Debug/src/subdir.mk
-include project5.2/src/subdir.mk
-include project5.2/Debug/src/subdir.mk
-include project5.11/src/subdir.mk
-include project5.11/Debug/src/subdir.mk
-include project5.10/src/subdir.mk
-include project5.10/Debug/src/subdir.mk
-include project5.1/src/subdir.mk
-include project5.1/Debug/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: chapter5

# Tool invocations
chapter5: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MacOS X C Linker'
	gcc  -o "chapter5" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) chapter5
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
