################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/Segment/Segment.c 

OBJS += \
./Src/HAL/Segment/Segment.o 

C_DEPS += \
./Src/HAL/Segment/Segment.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/Segment/%.o Src/HAL/Segment/%.su Src/HAL/Segment/%.cyclo: ../Src/HAL/Segment/%.c Src/HAL/Segment/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32F401CCUx -DSTM32 -DSTM32F4 -c -I../Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-Segment

clean-Src-2f-HAL-2f-Segment:
	-$(RM) ./Src/HAL/Segment/Segment.cyclo ./Src/HAL/Segment/Segment.d ./Src/HAL/Segment/Segment.o ./Src/HAL/Segment/Segment.su

.PHONY: clean-Src-2f-HAL-2f-Segment

