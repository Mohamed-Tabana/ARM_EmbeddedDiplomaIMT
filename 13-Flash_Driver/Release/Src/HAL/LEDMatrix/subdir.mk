################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/LEDMatrix/LEDMatrix_CFG.c \
../Src/HAL/LEDMatrix/LEDMatrix_PRG.c 

OBJS += \
./Src/HAL/LEDMatrix/LEDMatrix_CFG.o \
./Src/HAL/LEDMatrix/LEDMatrix_PRG.o 

C_DEPS += \
./Src/HAL/LEDMatrix/LEDMatrix_CFG.d \
./Src/HAL/LEDMatrix/LEDMatrix_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/LEDMatrix/%.o Src/HAL/LEDMatrix/%.su Src/HAL/LEDMatrix/%.cyclo: ../Src/HAL/LEDMatrix/%.c Src/HAL/LEDMatrix/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Services" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-LEDMatrix

clean-Src-2f-HAL-2f-LEDMatrix:
	-$(RM) ./Src/HAL/LEDMatrix/LEDMatrix_CFG.cyclo ./Src/HAL/LEDMatrix/LEDMatrix_CFG.d ./Src/HAL/LEDMatrix/LEDMatrix_CFG.o ./Src/HAL/LEDMatrix/LEDMatrix_CFG.su ./Src/HAL/LEDMatrix/LEDMatrix_PRG.cyclo ./Src/HAL/LEDMatrix/LEDMatrix_PRG.d ./Src/HAL/LEDMatrix/LEDMatrix_PRG.o ./Src/HAL/LEDMatrix/LEDMatrix_PRG.su

.PHONY: clean-Src-2f-HAL-2f-LEDMatrix

