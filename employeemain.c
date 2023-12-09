#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main() {
    EmployeePtr searchEmployeeByNumber(const Employee table[], int tableSize, long numberToFind);
    EmployeePtr searchEmployeeByName(const Employee table[], int tableSize, char* nameToFind);
    EmployeePtr searchEmployeeByPhone(const Employee table[], int tableSize, char* phoneToFind);
    EmployeePtr searchEmployeeBySalary(const Employee table[], int tableSize, double salaryToFind);

    extern Employee employeeTable[];
    extern const int employeeTableEntries;

    // test phone number search
    EmployeePtr matchPtr = searchEmployeeByPhone(employeeTable, employeeTableEntries, "909-555-2134");
    if (matchPtr != NULL) {
        printf("Employee with phone number 909-555-2134 is in record %d\n", matchPtr - employeeTable);
    } else {
        printf("Employee with phone number 909-555-2134 is NOT found in the record\n");
    }
    matchPtr = searchEmployeeByPhone(employeeTable, employeeTableEntries, "111-111-1111");
    if (matchPtr != NULL) {
        printf("Employee with phone number 111-111-1111 is in record %d\n", matchPtr - employeeTable);
    } else {
        printf("Employee with phone number 111-111-1111 is NOT found in the record\n");
    }

    // test salary search
    matchPtr = searchEmployeeBySalary(employeeTable, employeeTableEntries, 8.32);
    if (matchPtr != NULL) {
        printf("Employee with salary 8.32 is in record %d\n", matchPtr - employeeTable);
    } else {
        printf("Employee with salary 8.32 is NOT found in the record\n");
    }
    matchPtr = searchEmployeeBySalary(employeeTable, employeeTableEntries, 9999.9);
    if (matchPtr != NULL) {
        printf("Employee with salary 9999.9 is in record %d\n", matchPtr - employeeTable);
    } else {
        printf("Employee with salary 9999.9 is NOT found in the record\n");
    }
}