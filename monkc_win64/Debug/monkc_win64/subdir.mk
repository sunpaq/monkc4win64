################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../monkc_win64/trampoline_win64.asm 

C_SRCS += \
../monkc_win64/monkc.c 

OBJS += \
./monkc_win64/monkc.o \
./monkc_win64/trampoline_win64.o 

C_DEPS += \
./monkc_win64/monkc.d 


# Each subdirectory must supply rules for building sources it contributes
monkc_win64/%.o: ../monkc_win64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

monkc_win64/%.o: ../monkc_win64/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


