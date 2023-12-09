#include <string.h>
#include "employee.h"

EmployeePtr searchEmployeeByNumber(ConstEmployeePtr ptr, int tableSize, long targetNumber) {
    const ConstEmployeePtr endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) {
        if (ptr -> number == targetNumber) {
            return (EmployeePtr) ptr;
        }
    }
    return NULL;
}

EmployeePtr searchEmployeeByName(ConstEmployeePtr ptr, int tableSize, char* targetName) {
    const ConstEmployeePtr endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) {
        if (strcmp(ptr -> name, targetName) == 0) {
            return (EmployeePtr) ptr;
        }
    }
    return NULL;
}

EmployeePtr searchEmployeeByPhone(ConstEmployeePtr ptr, int tableSize, char* targetPhone) {
    const ConstEmployeePtr endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) {
        if (strcmp(ptr -> phone, targetPhone) == 0) {
            return (EmployeePtr) ptr;
        }
    }
    return NULL;
}

EmployeePtr searchEmployeeBySalary(ConstEmployeePtr ptr, int tableSize, double targetSalary) {
    const ConstEmployeePtr endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) {
        if (ptr -> salary == targetSalary) {
            return (EmployeePtr) ptr;
        }
    }
    return NULL;
}