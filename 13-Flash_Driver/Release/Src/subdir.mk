################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Services" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

