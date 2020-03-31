################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include project6.9/src/subdir.mk
-include project6.9/Debug/src/subdir.mk
-include project6.8/src/subdir.mk
-include project6.8/Debug/src/subdir.mk
-include project6.7/src/subdir.mk
-include project6.7/Debug/src/subdir.mk
-include project6.6/src/subdir.mk
-include project6.6/Debug/src/subdir.mk
-include project6.5/src/subdir.mk
-include project6.5/Debug/src/subdir.mk
-include project6.4/src/subdir.mk
-include project6.4/Debug/src/subdir.mk
-include project6.2/src/subdir.mk
-include project6.2/Debug/src/subdir.mk
-include project6.12/src/subdir.mk
-include project6.12/Debug/src/subdir.mk
-include project6.11/src/subdir.mk
-include project6.11/Debug/src/subdir.mk
-include project6.10/src/subdir.mk
-include project6.10/Debug/src/subdir.mk
-include project6.1/src/subdir.mk
-include project6.1/Debug/src/subdir.mk
-include exercise6.1/src/subdir.mk
-include exercise6.1/Debug/src/subdir.mk
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
all: chapter6

# Tool invocations
chapter6: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MacOS X C Linker'
	gcc  -o "chapter6" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) chapter6
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
