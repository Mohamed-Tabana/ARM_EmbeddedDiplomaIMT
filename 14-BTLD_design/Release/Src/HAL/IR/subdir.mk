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
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-IR

clean-Src-2f-HAL-2f-IR:
	-$(RM) ./Src/HAL/IR/IR_PRG.cyclo ./Src/HAL/IR/IR_PRG.d ./Src/HAL/IR/IR_PRG.o ./Src/HAL/IR/IR_PRG.su

.PHONY: clean-Src-2f-HAL-2f-IR

