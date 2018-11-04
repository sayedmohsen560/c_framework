################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/utilites/utilites.c 

OBJS += \
./src/utilites/utilites.o 

C_DEPS += \
./src/utilites/utilites.d 


# Each subdirectory must supply rules for building sources it contributes
src/utilites/%.o: ../src/utilites/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


