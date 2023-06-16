################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/SysTick/SysTick_PRG.c 

OBJS += \
./Src/MCAL/SysTick/SysTick_PRG.o 

C_DEPS += \
./Src/MCAL/SysTick/SysTick_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/SysTick/%.o Src/MCAL/SysTick/%.su Src/MCAL/SysTick/%.cyclo: ../Src/MCAL/SysTick/%.c Src/MCAL/SysTick/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CBUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/MCAL" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/5-SysTick_Driver/Src/MCAL/SysTick" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-SysTick

clean-Src-2f-MCAL-2f-SysTick:
	-$(RM) ./Src/MCAL/SysTick/SysTick_PRG.cyclo ./Src/MCAL/SysTick/SysTick_PRG.d ./Src/MCAL/SysTick/SysTick_PRG.o ./Src/MCAL/SysTick/SysTick_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-SysTick

