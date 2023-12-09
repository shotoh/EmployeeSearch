#ifndef EMPLOYEESEARCH_EMPLOYEE_H
#define EMPLOYEESEARCH_EMPLOYEE_H

#endif //EMPLOYEESEARCH_EMPLOYEE_H

#include <stdio.h>
#include <stddef.h>

typedef struct {
    long number;
    char *name;
    char *phone;
    double salary;
} Employee, *EmployeePtr;

typedef const Employee *ConstEmployeePtr;