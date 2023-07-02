################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/MCAL/EXTI/EXTI_PRG.c 

OBJS += \
./Inc/MCAL/EXTI/EXTI_PRG.o 

C_DEPS += \
./Inc/MCAL/EXTI/EXTI_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/MCAL/EXTI/%.o Inc/MCAL/EXTI/%.su Inc/MCAL/EXTI/%.cyclo: ../Inc/MCAL/EXTI/%.c Inc/MCAL/EXTI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/SPI" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/8-FreeRTOS/Inc/MCAL/UART" -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -mthumb -o "$@"

clean: clean-Inc-2f-MCAL-2f-EXTI

clean-Inc-2f-MCAL-2f-EXTI:
	-$(RM) ./Inc/MCAL/EXTI/EXTI_PRG.cyclo ./Inc/MCAL/EXTI/EXTI_PRG.d ./Inc/MCAL/EXTI/EXTI_PRG.o ./Inc/MCAL/EXTI/EXTI_PRG.su

.PHONY: clean-Inc-2f-MCAL-2f-EXTI

