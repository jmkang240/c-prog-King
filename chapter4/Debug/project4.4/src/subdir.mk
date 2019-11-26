################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project4.4/src/project4.4.c 

OBJS += \
./project4.4/src/project4.4.o 

C_DEPS += \
./project4.4/src/project4.4.d 


# Each subdirectory must supply rules for building sources it contributes
project4.4/src/%.o: ../project4.4/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


