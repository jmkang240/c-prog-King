################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../exercise6.1/src/exercise6.1.c 

OBJS += \
./exercise6.1/src/exercise6.1.o 

C_DEPS += \
./exercise6.1/src/exercise6.1.d 


# Each subdirectory must supply rules for building sources it contributes
exercise6.1/src/%.o: ../exercise6.1/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


