################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project6.9/src/project6.9.c 

OBJS += \
./project6.9/src/project6.9.o 

C_DEPS += \
./project6.9/src/project6.9.d 


# Each subdirectory must supply rules for building sources it contributes
project6.9/src/%.o: ../project6.9/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


