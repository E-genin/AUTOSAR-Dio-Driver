################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxAsclin_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCan_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCcu6_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxDmu_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEray_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEvadc_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGpt12_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGtm_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPms_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPort_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxQspi_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxScu_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSent_PinMap.c \
../Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSmu_PinMap.c 

OBJS += \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxAsclin_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCan_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCcu6_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxDmu_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEray_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEvadc_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGpt12_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGtm_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPms_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPort_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxQspi_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxScu_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSent_PinMap.o \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSmu_PinMap.o 

COMPILED_SRCS += \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxAsclin_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCan_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCcu6_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxDmu_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEray_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEvadc_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGpt12_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGtm_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPms_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPort_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxQspi_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxScu_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSent_PinMap.src \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSmu_PinMap.src 

C_DEPS += \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxAsclin_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCan_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxCcu6_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxDmu_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEray_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxEvadc_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGpt12_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxGtm_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPms_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxPort_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxQspi_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxScu_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSent_PinMap.d \
./Libraries/iLLD/TC33A/Tricore/_PinMap/IfxSmu_PinMap.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC33A/Tricore/_PinMap/%.src: ../Libraries/iLLD/TC33A/Tricore/_PinMap/%.c Libraries/iLLD/TC33A/Tricore/_PinMap/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C/C++ Compiler'
	cctc -D__CPU__=tc33x "-fC:/Users/zakar/AURIX-v1.7.2-workspace/Test_2/Debug/TASKING_C_C___Compiler-Include_paths.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc33x -o "$@"  "$<"  -cs --dep-file="$(@:.src=.d)" --misrac-version=2012 -N0 -Z0 -Y0 2>&1;
	@echo 'Finished building: $<'
	@echo ' '

Libraries/iLLD/TC33A/Tricore/_PinMap/%.o: ./Libraries/iLLD/TC33A/Tricore/_PinMap/%.src Libraries/iLLD/TC33A/Tricore/_PinMap/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<" --list-format=L1 --optimize=gs
	@echo 'Finished building: $<'
	@echo ' '


