################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project5.10/src/project5.10.c 

OBJS += \
./project5.10/src/project5.10.o 

C_DEPS += \
./project5.10/src/project5.10.d 


# Each subdirectory must supply rules for building sources it contributes
project5.10/src/%.o: ../project5.10/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


