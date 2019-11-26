################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project4.2/src/project4.2.c 

OBJS += \
./project4.2/src/project4.2.o 

C_DEPS += \
./project4.2/src/project4.2.d 


# Each subdirectory must supply rules for building sources it contributes
project4.2/src/%.o: ../project4.2/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


