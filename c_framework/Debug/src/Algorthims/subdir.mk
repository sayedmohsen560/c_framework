################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Algorthims/searching.c \
../src/Algorthims/sorting.c 

OBJS += \
./src/Algorthims/searching.o \
./src/Algorthims/sorting.o 

C_DEPS += \
./src/Algorthims/searching.d \
./src/Algorthims/sorting.d 


# Each subdirectory must supply rules for building sources it contributes
src/Algorthims/%.o: ../src/Algorthims/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


