################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../exercise4.2/src/exercise4.2.c 

OBJS += \
./exercise4.2/src/exercise4.2.o 

C_DEPS += \
./exercise4.2/src/exercise4.2.d 


# Each subdirectory must supply rules for building sources it contributes
exercise4.2/src/%.o: ../exercise4.2/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


