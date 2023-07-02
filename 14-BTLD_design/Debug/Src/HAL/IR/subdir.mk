################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/IR/IR_PRG.c 

OBJS += \
./Src/HAL/IR/IR_PRG.o 

C_DEPS += \
./Src/HAL/IR/IR_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/IR/%.o Src/HAL/IR/%.su Src/HAL/IR/%.cyclo: ../Src/HAL/IR/%.c Src/HAL/IR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/App" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/HAL" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL/UART" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/MCAL" -I"D:/IMT_ARM/STM32F104_BlackPill/14-BTLD_design/Src/Services/S2P" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-IR

clean-Src-2f-HAL-2f-IR:
	-$(RM) ./Src/HAL/IR/IR_PRG.cyclo ./Src/HAL/IR/IR_PRG.d ./Src/HAL/IR/IR_PRG.o ./Src/HAL/IR/IR_PRG.su

.PHONY: clean-Src-2f-HAL-2f-IR

