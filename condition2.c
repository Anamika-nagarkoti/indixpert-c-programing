#include<stdio.h>

int main(){
    char studentID[10];
    char name[15];
    char address[20];
    char email[20];
    int age;

    printf("please enter student ID\n");
    scanf("%s",&studentID); 
    
    
     printf("please enter the name\n");
     scanf("%s",&name); 
    
    
    printf("please enter the address\n");
    scanf("%s",&address); 
    
    
     printf("please enter the email\n");
     scanf("%s",&email); 
    
    
    printf("please enter the age\n");
    scanf("%d",&age);

   printf("**********=========student information=========***********\n");

   printf("studentID = %s\n",studentID);
   printf("name = %s\n",name);
   printf("address = %s\n",address);
   printf("email = %s\n",email);
   printf("age = %d\n",age);


  return 0;

}
 
  