################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/TFT/ImageArray.c \
../Src/HAL/TFT/TFT_cfg.c \
../Src/HAL/TFT/TFT_prg.c 

OBJS += \
./Src/HAL/TFT/ImageArray.o \
./Src/HAL/TFT/TFT_cfg.o \
./Src/HAL/TFT/TFT_prg.o 

C_DEPS += \
./Src/HAL/TFT/ImageArray.d \
./Src/HAL/TFT/TFT_cfg.d \
./Src/HAL/TFT/TFT_prg.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/TFT/%.o Src/HAL/TFT/%.su Src/HAL/TFT/%.cyclo: ../Src/HAL/TFT/%.c Src/HAL/TFT/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/HAL/TFT" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/12-TFT/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-TFT

clean-Src-2f-HAL-2f-TFT:
	-$(RM) ./Src/HAL/TFT/ImageArray.cyclo ./Src/HAL/TFT/ImageArray.d ./Src/HAL/TFT/ImageArray.o ./Src/HAL/TFT/ImageArray.su ./Src/HAL/TFT/TFT_cfg.cyclo ./Src/HAL/TFT/TFT_cfg.d ./Src/HAL/TFT/TFT_cfg.o ./Src/HAL/TFT/TFT_cfg.su ./Src/HAL/TFT/TFT_prg.cyclo ./Src/HAL/TFT/TFT_prg.d ./Src/HAL/TFT/TFT_prg.o ./Src/HAL/TFT/TFT_prg.su

.PHONY: clean-Src-2f-HAL-2f-TFT

