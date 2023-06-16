################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/UART/UART_PRG.c 

OBJS += \
./Src/MCAL/UART/UART_PRG.o 

C_DEPS += \
./Src/MCAL/UART/UART_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/UART/%.o Src/MCAL/UART/%.su Src/MCAL/UART/%.cyclo: ../Src/MCAL/UART/%.c Src/MCAL/UART/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/TFT" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-UART

clean-Src-2f-MCAL-2f-UART:
	-$(RM) ./Src/MCAL/UART/UART_PRG.cyclo ./Src/MCAL/UART/UART_PRG.d ./Src/MCAL/UART/UART_PRG.o ./Src/MCAL/UART/UART_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-UART

