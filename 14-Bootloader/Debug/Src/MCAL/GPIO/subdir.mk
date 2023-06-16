################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/GPIO/GPIO_PRG.c 

OBJS += \
./Src/MCAL/GPIO/GPIO_PRG.o 

C_DEPS += \
./Src/MCAL/GPIO/GPIO_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/GPIO/%.o Src/MCAL/GPIO/%.su Src/MCAL/GPIO/%.cyclo: ../Src/MCAL/GPIO/%.c Src/MCAL/GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Services" -I"D:/IMT_ARM/STM32F104_BlackPill/14-Bootloader/Src/Services/S2P" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-GPIO

clean-Src-2f-MCAL-2f-GPIO:
	-$(RM) ./Src/MCAL/GPIO/GPIO_PRG.cyclo ./Src/MCAL/GPIO/GPIO_PRG.d ./Src/MCAL/GPIO/GPIO_PRG.o ./Src/MCAL/GPIO/GPIO_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-GPIO

