################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/arrays/arrays.c 

OBJS += \
./src/arrays/arrays.o 

C_DEPS += \
./src/arrays/arrays.d 


# Each subdirectory must supply rules for building sources it contributes
src/arrays/%.o: ../src/arrays/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


