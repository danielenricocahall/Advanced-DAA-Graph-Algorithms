################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Driver.cpp \
../EdmundsKarpSolver.cpp \
../FordFulkersonSolver.cpp \
../Vertex.cpp 

OBJS += \
./Driver.o \
./EdmundsKarpSolver.o \
./FordFulkersonSolver.o \
./Vertex.o 

CPP_DEPS += \
./Driver.d \
./EdmundsKarpSolver.d \
./FordFulkersonSolver.d \
./Vertex.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


