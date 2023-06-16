################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/NVIC/NVIC_PRG.c 

OBJS += \
./Src/MCAL/NVIC/NVIC_PRG.o 

C_DEPS += \
./Src/MCAL/NVIC/NVIC_PRG.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/NVIC/%.o Src/MCAL/NVIC/%.su Src/MCAL/NVIC/%.cyclo: ../Src/MCAL/NVIC/%.c Src/MCAL/NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CBUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/4-EXTI_Driver/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/4-EXTI_Driver/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/4-EXTI_Driver/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/4-EXTI_Driver/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/4-EXTI_Driver/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-NVIC

clean-Src-2f-MCAL-2f-NVIC:
	-$(RM) ./Src/MCAL/NVIC/NVIC_PRG.cyclo ./Src/MCAL/NVIC/NVIC_PRG.d ./Src/MCAL/NVIC/NVIC_PRG.o ./Src/MCAL/NVIC/NVIC_PRG.su

.PHONY: clean-Src-2f-MCAL-2f-NVIC

