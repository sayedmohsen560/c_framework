################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/DataStrucure/queue.c \
../src/DataStrucure/stack.c 

OBJS += \
./src/DataStrucure/queue.o \
./src/DataStrucure/stack.o 

C_DEPS += \
./src/DataStrucure/queue.d \
./src/DataStrucure/stack.d 


# Each subdirectory must supply rules for building sources it contributes
src/DataStrucure/%.o: ../src/DataStrucure/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


