################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/MCAL/Flash/FMI_PRG.c 

OBJS += \
./Inc/MCAL/Flash/FMI_PRG.o 

C_DEPS += \
./Inc/MCAL/Flash/FMI_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/MCAL/Flash/%.o Inc/MCAL/Flash/%.su Inc/MCAL/Flash/%.cyclo: ../Inc/MCAL/Flash/%.c Inc/MCAL/Flash/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/UART" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-MCAL-2f-Flash

clean-Inc-2f-MCAL-2f-Flash:
	-$(RM) ./Inc/MCAL/Flash/FMI_PRG.cyclo ./Inc/MCAL/Flash/FMI_PRG.d ./Inc/MCAL/Flash/FMI_PRG.o ./Inc/MCAL/Flash/FMI_PRG.su

.PHONY: clean-Inc-2f-MCAL-2f-Flash

