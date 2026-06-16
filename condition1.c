#include <stdio.h>

int main()
{
  
   char student_name[17]; 
   char subject_1[10],subject_2[10],subject_3[10],subject_4[10],subject_5[10];
   int marks[5];
   float percentage;
   int count = 0;
   int sum = 0;
   
   printf("please enter student name\n");
   scanf("%s" ,&student_name);

   printf("please enter first subject name\n");
   scanf("%s" ,&subject_1);
   
   printf("please enter second subject name\n");
   scanf("%s" ,&subject_2);
   
   printf("please enter third subject nmae\n");
   scanf("%s" ,&subject_3);
   
   printf("please enter forth subject name\n");
   scanf("%s" ,&subject_4);
   
   printf("please enter fifth subject name\n");
   scanf("%s" ,&subject_5);
    
   printf("please enter all the subjects marks\n");
   for(int i = 0; i<5; i++){
    scanf("%d" ,&marks[i]);
     sum = sum + marks[i];
   }
   
printf("=============student report card================\n");
printf("\nstudent name is %s\n",student_name);

printf("%s : %d\n", subject_1, marks[0]);
printf("%s : %d\n", subject_2, marks[1]);
printf("%s : %d\n", subject_3, marks[2]);
printf("%s : %d\n", subject_4, marks[3]);
printf("%s : %d\n", subject_5, marks[4]);
   

percentage = (sum / 500.0) * 100;

printf("\nTotal marks = %d\n", sum);
printf("Student percentage = %.2f%%\n", percentage);

    


return 0;

}




