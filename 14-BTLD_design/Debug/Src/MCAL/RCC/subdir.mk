################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/RCC/RCC_PRG.c 

OBJS += \
./Src/MCAL/RCC/RCC_PRG.o 

C_DEPS += \
./Src/MCAL/RCC/RCC_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/RCC/%.o Src/MCAL/RCC/%.su Src/MCAL/RCC/%.cyclo: ../Src/MCAL/RCC/%.c Src/MCAL/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/Services/S2P" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-RCC

clean-Src-2f-MCAL-2f-RCC:
	-$(RM) ./Src/MCAL/RCC/RCC_PRG.cyclo ./Src/MCAL/RCC/RCC_PRG.d ./Src/MCAL/RCC/RCC_PRG.o ./Src/MCAL/RCC/RCC_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-RCC

