#include <stdio.h>
#include <stdlib.h>
 
/* We need an additional parameter to determine number of elements to process.
 * Same as we needed for array processing */
/* Return type of compute_average should be float or double and not int */
double compute_average(int *, int);
void read_score(int *, int);
 
int main (int argc, char * argv[]) {
    int *score = NULL, num_students = 0;
    double average = 0;
 
    printf ("Please enter number of students: ");
    scanf("%d",&num_students);
    if (num_students <= 0) {
        printf ("Invalid input. Terminating\n");
        return 1;
    }
 
    score = malloc (sizeof(int) * num_students);
    if (NULL == score) {
        printf ("Failed to allocate memory. Terminating\n");
        return 1;
    }
 
    read_score(score, num_students);
    average = compute_average(score, num_students);
    printf("Average score of the class is %f\n", average);
 
    free(score);
    return 0;
}
 
double compute_average(int *score, int num){
    int sum = 0;
    for(int i=0; i<num; i++){
        sum += score[i];
    }
    return ((double)sum)/num;
}
 
void read_score(int *score, int num) {
    for(int i=0; i<num; i++){
        printf("Enter score of student #%d: ",i+1);
        scanf("%d", &score[i]);
    }
}
