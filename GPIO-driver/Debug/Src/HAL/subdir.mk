################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/Segment.c 

OBJS += \
./Src/HAL/Segment.o 

C_DEPS += \
./Src/HAL/Segment.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/%.o Src/HAL/%.su Src/HAL/%.cyclo: ../Src/HAL/%.c Src/HAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -I"D:/IMT_ARM/STM32F104_BlackPill/GPIO-driver" -I"D:/IMT_ARM/STM32F104_BlackPill/GPIO-driver/Src" -I"D:/IMT_ARM/STM32F104_BlackPill/GPIO-driver/Src/MCAL" -I"D:/IMT_ARM/STM32F104_BlackPill/GPIO-driver/Src/MCAL/RCC" -I"D:/IMT_ARM/STM32F104_BlackPill/GPIO-driver/Src/MCAL/GPIO" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL

clean-Src-2f-HAL:
	-$(RM) ./Src/HAL/Segment.cyclo ./Src/HAL/Segment.d ./Src/HAL/Segment.o ./Src/HAL/Segment.su

.PHONY: clean-Src-2f-HAL

