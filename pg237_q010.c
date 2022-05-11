#include<stdio.h>
 
int main (int argc, char * argv[])  {
    int marks[5][3] = { 0 };
    int student=0, subject=0, sum=0;
 
    for(student=0; student<5; student++) {
        for(subject=0; subject<3; subject++) {
            printf("Enter marks for student %d subject %d: ",student,subject);
            scanf("%d",&marks[student][subject]);
        }
    }
 
    for(student=0; student<5; student++) {
        sum = 0;
        for(subject=0; subject<3; subject++) {
            sum = sum + marks[student][subject];
        }
        printf("Student %d scored total %d and average %f\n", student, sum, sum/3.0);
    }
 
    for(subject=0; subject<3; subject++) {
        sum = 0;
        for(student=0; student<5; student++) {
            sum = sum + marks[student][subject];
        }
        printf("Average score for subject %d is %f\n", subject, sum/5.0);
    }
 
    return 0;
}
