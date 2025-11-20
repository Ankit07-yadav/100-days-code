#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50
#define FILENAME "detail.txt"

// Structure to store student information
struct Student {
    char name[MAX_NAME];
    int roll;
    int marks;
};

// Function to write student records to file
void writeRecords(struct Student students[], int count) {
    FILE *fp = fopen(FILENAME, "w");
    
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    
    // Write each student record using fprintf
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    
    fclose(fp);
    printf("Records written to file successfully!\n\n");
}

// Function to read student records from file
void readRecords() {
    FILE *fp = fopen(FILENAME, "r");
    struct Student student;
    
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    
    printf("Student Records:\n");
    printf("================\n");
    
    // Read each student record using fscanf
    while (fscanf(fp, "%s %d %d", student.name, &student.roll, &student.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", 
               student.name, student.roll, student.marks);
    }
    
    fclose(fp);
}

int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory for student records
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Input student details
    printf("\nEnter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    // Write records to file
    printf("\n");
    writeRecords(students, n);
    
    // Read and display records from file
    readRecords();
    
    // Free allocated memory
    free(students);
    
    return 0;
}