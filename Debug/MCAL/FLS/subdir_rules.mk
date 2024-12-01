################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
MCAL/FLS/%.o: ../MCAL/FLS/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1270/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mlittle-endian -mthumb -Og -I"C:/Self/CodeComposer_Workspace/Secure_FOTA/Secue_FOTA" -I"C:/Self/CodeComposer_Workspace/Secure_FOTA/Secue_FOTA/LIB" -I"C:/Self/CodeComposer_Workspace/Secure_FOTA/Secue_FOTA/MCAL/FLS" -I"C:/ti/ccs1270/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/include" -DPART_TM4C123GH6PM -g -Wall -fdata-sections -ffunction-sections -MMD -MP -MF"MCAL/FLS/$(basename $(<F)).d_raw" -MT"$(@)"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


