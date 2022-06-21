#include <stdio.h>
struct student
{
  int roll_no;
  char name[30];
  int phone_number;
};
int main()
{
  struct student stud[5];
  int i;
  for(i=0; i<4; i++)
    {
      printf("Student %d\n",i+1);
      printf("Enter roll no. :\n");
      scanf("%d", &stud[i].roll_no);
      printf("Enter name :\n");
      scanf("%s",stud[i].name);
      printf("Enter phone number :\n");
      scanf("%d", &stud[i].phone_number);
    }
  for(i=0; i<4; i++)
    {
      printf("Student %d\n",i+1);
      printf("Roll no. : %d\n", stud[i].roll_no);
      printf("Name : %s\n", stud[i].name);
      printf("Phone no. : %d\n", stud[i].phone_number);
    }
  return 0;
}

/*pointer version
#include <stdio.h>
#include <string.h>
struct student
{
  int roll_no;
  char name[30];
  int phone_number;
};

void display(struct student *st)
{
  printf("Roll no : %d\n", st -> roll_no);
  printf("Name : %s\n", st -> name);
  printf("Phone no : %d\n", st -> phone_number);
}

int main()
{
  struct student s;
  s.roll_no = 4;
  strcpy(s.name,"Ron");
  s.phone_number = 888888;
  display(&s);
*/