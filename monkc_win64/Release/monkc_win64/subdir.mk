################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../monkc_win64/trampoline_win64.asm 

C_SRCS += \
../monkc_win64/MCArray.c \
../monkc_win64/MCArrayLinkedList.c \
../monkc_win64/MCBits.c \
../monkc_win64/MCBuffer.c \
../monkc_win64/MCClock.c \
../monkc_win64/MCContext.c \
../monkc_win64/MCException.c \
../monkc_win64/MCGeometry.c \
../monkc_win64/MCGraph.c \
../monkc_win64/MCHeap.c \
../monkc_win64/MCIO.c \
../monkc_win64/MCLinkedList.c \
../monkc_win64/MCMap.c \
../monkc_win64/MCMath.c \
../monkc_win64/MCProcess.c \
../monkc_win64/MCSet.c \
../monkc_win64/MCSort.c \
../monkc_win64/MCString.c \
../monkc_win64/MCTree.c \
../monkc_win64/MCUnitTest.c \
../monkc_win64/monkc.c 

OBJS += \
./monkc_win64/MCArray.o \
./monkc_win64/MCArrayLinkedList.o \
./monkc_win64/MCBits.o \
./monkc_win64/MCBuffer.o \
./monkc_win64/MCClock.o \
./monkc_win64/MCContext.o \
./monkc_win64/MCException.o \
./monkc_win64/MCGeometry.o \
./monkc_win64/MCGraph.o \
./monkc_win64/MCHeap.o \
./monkc_win64/MCIO.o \
./monkc_win64/MCLinkedList.o \
./monkc_win64/MCMap.o \
./monkc_win64/MCMath.o \
./monkc_win64/MCProcess.o \
./monkc_win64/MCSet.o \
./monkc_win64/MCSort.o \
./monkc_win64/MCString.o \
./monkc_win64/MCTree.o \
./monkc_win64/MCUnitTest.o \
./monkc_win64/monkc.o \
./monkc_win64/trampoline_win64.o 

C_DEPS += \
./monkc_win64/MCArray.d \
./monkc_win64/MCArrayLinkedList.d \
./monkc_win64/MCBits.d \
./monkc_win64/MCBuffer.d \
./monkc_win64/MCClock.d \
./monkc_win64/MCContext.d \
./monkc_win64/MCException.d \
./monkc_win64/MCGeometry.d \
./monkc_win64/MCGraph.d \
./monkc_win64/MCHeap.d \
./monkc_win64/MCIO.d \
./monkc_win64/MCLinkedList.d \
./monkc_win64/MCMap.d \
./monkc_win64/MCMath.d \
./monkc_win64/MCProcess.d \
./monkc_win64/MCSet.d \
./monkc_win64/MCSort.d \
./monkc_win64/MCString.d \
./monkc_win64/MCTree.d \
./monkc_win64/MCUnitTest.d \
./monkc_win64/monkc.d 


# Each subdirectory must supply rules for building sources it contributes
monkc_win64/%.o: ../monkc_win64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

monkc_win64/%.o: ../monkc_win64/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


