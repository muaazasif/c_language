#include <stdio.h>
struct EmployeeData
{
	char *emp_name;
	int emp_id;
	int emp_sal;
	char *emp_dep;
}employee;
main(){
//	struct EmployeeData employee;

	employee.emp_name="muaaz";
	employee.emp_dep="Mathematic";
	employee.emp_id=1234;
	employee.emp_sal=12000;
	
	
	
	printf("Employee Name : %s",employee.emp_name);
	printf("\nEmployee Id : %d",employee.emp_id);
	printf("\nEmployee Salary : %d",employee.emp_sal);
	printf("\nemployee Department : %s",employee.emp_dep);
}
