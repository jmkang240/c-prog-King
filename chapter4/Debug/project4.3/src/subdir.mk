################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project4.3/src/project4.3.c 

OBJS += \
./project4.3/src/project4.3.o 

C_DEPS += \
./project4.3/src/project4.3.d 


# Each subdirectory must supply rules for building sources it contributes
project4.3/src/%.o: ../project4.3/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


