#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    char name[50];
    int math, physics, chemistry;
    float avg;
} Student;
 
int compare(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    return (studentB->avg > studentA->avg) - (studentB->avg < studentA->avg);
}
 
int main() {
    FILE *fp1, *fp2;
    Student students[300];
    int n, i;
 
    fp1 = fopen("student.txt", "r");
    fscanf(fp1, "%d\n", &n);
    for(i = 0; i < n; i++) {
        fscanf(fp1, "%[^0-9] %d %d %d\n", students[i].name, &students[i].math, &students[i].physics, &students[i].chemistry);
        students[i].avg = (students[i].math + students[i].physics + students[i].chemistry) / 3.0;
    }
    fclose(fp1);
 
    fp2 = fopen("student.dat", "w");
    for(i = 0; i < n; i++) {
        fprintf(fp2, "%s %.2f\n", students[i].name, students[i].avg);
    }
    fclose(fp2);
    qsort(students, n, sizeof(Student), compare);
    for(i = 0; i < n; i++) {
        printf("%s %.2f\n", students[i].name, students[i].avg);
    }
    return 0;
}
