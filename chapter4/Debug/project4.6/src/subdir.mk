################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project4.6/src/project4.6.c 

OBJS += \
./project4.6/src/project4.6.o 

C_DEPS += \
./project4.6/src/project4.6.d 


# Each subdirectory must supply rules for building sources it contributes
project4.6/src/%.o: ../project4.6/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


