################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Services/S2P/S2P_CFG.c \
../Src/Services/S2P/S2P_PRG.c 

OBJS += \
./Src/Services/S2P/S2P_CFG.o \
./Src/Services/S2P/S2P_PRG.o 

C_DEPS += \
./Src/Services/S2P/S2P_CFG.d \
./Src/Services/S2P/S2P_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Services/S2P/%.o Src/Services/S2P/%.su Src/Services/S2P/%.cyclo: ../Src/Services/S2P/%.c Src/Services/S2P/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Services-2f-S2P

clean-Src-2f-Services-2f-S2P:
	-$(RM) ./Src/Services/S2P/S2P_CFG.cyclo ./Src/Services/S2P/S2P_CFG.d ./Src/Services/S2P/S2P_CFG.o ./Src/Services/S2P/S2P_CFG.su ./Src/Services/S2P/S2P_PRG.cyclo ./Src/Services/S2P/S2P_PRG.d ./Src/Services/S2P/S2P_PRG.o ./Src/Services/S2P/S2P_PRG.su

.PHONY: clean-Src-2f-Services-2f-S2P
