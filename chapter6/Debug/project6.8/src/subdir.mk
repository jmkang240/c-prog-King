################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../project6.8/src/project6.8.c 

OBJS += \
./project6.8/src/project6.8.o 

C_DEPS += \
./project6.8/src/project6.8.d 


# Each subdirectory must supply rules for building sources it contributes
project6.8/src/%.o: ../project6.8/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


