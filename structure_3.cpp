#include <stdio.h>
struct student
{
  int roll_no;
  char name[30];
  int phone_number;
  int sal;
};
main()
{
  struct student stud[3];
  int i;
  for(i=0; i<3; i++)
    {
      printf("Student %d\n",i+1);
      printf("Enter roll no. :\n");
      scanf("%d", &stud[i].roll_no);
      printf("Enter salary :\n");
      scanf("%d", &stud[i].sal);
      printf("Enter name :\n");
      scanf("%s",&stud[i].name);
      printf("Enter phone number :\n");
      scanf("%d", &stud[i].phone_number);
    }
  for(i=0; i<3; i++)
    {
      printf("Student %d\n",i+1);
      printf("Roll no. : %d\n", stud[i].roll_no);
      printf("salary : %d\n", stud[i].sal);
      printf("Name : %s\n", stud[i].name);
      printf("Phone no. : %d\n", stud[i].phone_number);
    }
  return 0;
}
