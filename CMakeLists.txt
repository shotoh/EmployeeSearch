cmake_minimum_required(VERSION 3.26)
project(EmployeeSearch C)

set(CMAKE_C_STANDARD 11)

add_executable(EmployeeSearch
        employeemain.c
        employee.h
        employeetable.c
        employeetwo.c
)
