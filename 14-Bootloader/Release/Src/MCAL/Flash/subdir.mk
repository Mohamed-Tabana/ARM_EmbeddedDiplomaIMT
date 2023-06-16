################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/Flash/FMI_PRG.c 

OBJS += \
./Src/MCAL/Flash/FMI_PRG.o 

C_DEPS += \
./Src/MCAL/Flash/FMI_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/Flash/%.o Src/MCAL/Flash/%.su Src/MCAL/Flash/%.cyclo: ../Src/MCAL/Flash/%.c Src/MCAL/Flash/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Services" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Services/S2P" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-Flash

clean-Src-2f-MCAL-2f-Flash:
	-$(RM) ./Src/MCAL/Flash/FMI_PRG.cyclo ./Src/MCAL/Flash/FMI_PRG.d ./Src/MCAL/Flash/FMI_PRG.o ./Src/MCAL/Flash/FMI_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-Flash

