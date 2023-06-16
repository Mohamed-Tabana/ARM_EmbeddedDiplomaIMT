################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/App/HexParser_PRG.c 

OBJS += \
./Src/App/HexParser_PRG.o 

C_DEPS += \
./Src/App/HexParser_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/App/%.o Src/App/%.su Src/App/%.cyclo: ../Src/App/%.c Src/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Services" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Services/S2P" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-App

clean-Src-2f-App:
	-$(RM) ./Src/App/HexParser_PRG.cyclo ./Src/App/HexParser_PRG.d ./Src/App/HexParser_PRG.o ./Src/App/HexParser_PRG.su

.PHONY: clean-Src-2f-App

