################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/arm_matrix_example_f32.c \
../Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/math_helper.c 

OBJS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/arm_matrix_example_f32.o \
./Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/math_helper.o 

C_DEPS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/arm_matrix_example_f32.d \
./Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/math_helper.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/arm_matrix_example_f32.o: ../Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/arm_matrix_example_f32.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -IDrivers/STM32F4xx_HAL_Driver/Inc/Legacy -IDrivers/CMSIS/Include -IDrivers/CMSIS/Device/ST/STM32F4xx/Include -IDrivers/STM32F4xx_HAL_Driver/Inc -IInc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/arm_matrix_example_f32.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/math_helper.o: ../Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/math_helper.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -IDrivers/STM32F4xx_HAL_Driver/Inc/Legacy -IDrivers/CMSIS/Include -IDrivers/CMSIS/Device/ST/STM32F4xx/Include -IDrivers/STM32F4xx_HAL_Driver/Inc -IInc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/CMSIS/DSP/Examples/ARM/arm_matrix_example/math_helper.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

