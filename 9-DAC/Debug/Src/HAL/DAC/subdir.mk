################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/DAC/DAC_CFG.c \
../Src/HAL/DAC/DAC_PRG.c 

OBJS += \
./Src/HAL/DAC/DAC_CFG.o \
./Src/HAL/DAC/DAC_PRG.o 

C_DEPS += \
./Src/HAL/DAC/DAC_CFG.d \
./Src/HAL/DAC/DAC_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/DAC/%.o Src/HAL/DAC/%.su Src/HAL/DAC/%.cyclo: ../Src/HAL/DAC/%.c Src/HAL/DAC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/MCAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/9-DAC/Src/Services/S2P" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-DAC

clean-Src-2f-HAL-2f-DAC:
	-$(RM) ./Src/HAL/DAC/DAC_CFG.cyclo ./Src/HAL/DAC/DAC_CFG.d ./Src/HAL/DAC/DAC_CFG.o ./Src/HAL/DAC/DAC_CFG.su ./Src/HAL/DAC/DAC_PRG.cyclo ./Src/HAL/DAC/DAC_PRG.d ./Src/HAL/DAC/DAC_PRG.o ./Src/HAL/DAC/DAC_PRG.su

.PHONY: clean-Src-2f-HAL-2f-DAC
