################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Kernel/Kernel_PRG.c 

OBJS += \
./Src/Kernel/Kernel_PRG.o 

C_DEPS += \
./Src/Kernel/Kernel_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Kernel/%.o Src/Kernel/%.su Src/Kernel/%.cyclo: ../Src/Kernel/%.c Src/Kernel/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/11-SPI/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Kernel

clean-Src-2f-Kernel:
	-$(RM) ./Src/Kernel/Kernel_PRG.cyclo ./Src/Kernel/Kernel_PRG.d ./Src/Kernel/Kernel_PRG.o ./Src/Kernel/Kernel_PRG.su

.PHONY: clean-Src-2f-Kernel

