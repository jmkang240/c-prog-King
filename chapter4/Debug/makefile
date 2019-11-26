################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include project4.6/src/subdir.mk
-include project4.6/Debug/src/subdir.mk
-include project4.4/src/subdir.mk
-include project4.3/src/subdir.mk
-include project4.3/Debug/src/subdir.mk
-include project4.2/src/subdir.mk
-include project4.2/Debug/src/subdir.mk
-include exercise4.2/src/subdir.mk
-include exercise4.2/Debug/src/subdir.mk
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
all: chapter4

# Tool invocations
chapter4: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MacOS X C Linker'
	gcc  -o "chapter4" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) chapter4
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
