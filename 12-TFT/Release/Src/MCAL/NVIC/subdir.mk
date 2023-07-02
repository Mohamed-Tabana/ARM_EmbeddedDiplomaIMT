################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/NVIC/NVIC_PRG.c 

OBJS += \
./Src/MCAL/NVIC/NVIC_PRG.o 

C_DEPS += \
./Src/MCAL/NVIC/NVIC_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/NVIC/%.o Src/MCAL/NVIC/%.su Src/MCAL/NVIC/%.cyclo: ../Src/MCAL/NVIC/%.c Src/MCAL/NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/TFT" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Services" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-NVIC

clean-Src-2f-MCAL-2f-NVIC:
	-$(RM) ./Src/MCAL/NVIC/NVIC_PRG.cyclo ./Src/MCAL/NVIC/NVIC_PRG.d ./Src/MCAL/NVIC/NVIC_PRG.o ./Src/MCAL/NVIC/NVIC_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-NVIC
