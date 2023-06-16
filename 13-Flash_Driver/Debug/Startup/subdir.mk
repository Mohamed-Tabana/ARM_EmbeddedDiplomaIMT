################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f401ccux.s 

OBJS += \
./Startup/startup_stm32f401ccux.o 

S_DEPS += \
./Startup/startup_stm32f401ccux.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/DAC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Services/S2P" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/IR" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/LEDMatrix" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/HAL/Segment" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Kernel" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/EXTI" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/Flash" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/GPIO" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/NVIC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/MCAL/SysTick" -I"D:/IMT_ARM/STM32F104_BlackPill/13-Flash_Driver/Src/Services" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Startup

clean-Startup:
	-$(RM) ./Startup/startup_stm32f401ccux.d ./Startup/startup_stm32f401ccux.o

.PHONY: clean-Startup

