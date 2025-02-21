//Write a program to read RollNo, Name, Address, Age & marks in physics, C, math in three students and display the student details with average marks achieved.

#include <stdio.h>
struct Student {
    int RollNo;
    char Name[100];
    char Address[200];
    int Age;
    float Physics, C, Math;
    float average;
};

int main() {
    struct Student students[3];

    // Input details for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].RollNo);
        getchar();  // to consume the newline character left by scanf

        printf("Name: ");
        fgets(students[i].Name, sizeof(students[i].Name), stdin);

        printf("Address: ");
        fgets(students[i].Address, sizeof(students[i].Address), stdin);

        printf("Age: ");
        scanf("%d", &students[i].Age);

        printf("Marks in Physics: ");
        scanf("%f", &students[i].Physics);

        printf("Marks in C: ");
        scanf("%f", &students[i].C);

        printf("Marks in Math: ");
        scanf("%f", &students[i].Math);

        // Calculate average marks
        students[i].average = (students[i].Physics + students[i].C + students[i].Math) / 3.0;
        getchar();  // to consume the newline character left by scanf
        printf("\n");
    }

    // Display the details of the students
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].RollNo);
        printf("Name: %s", students[i].Name);
        printf("Address: %s", students[i].Address);
        printf("Age: %d\n", students[i].Age);
        printf("Marks in Physics: %.2f\n", students[i].Physics);
        printf("Marks in C: %.2f\n", students[i].C);
        printf("Marks in Math: %.2f\n", students[i].Math);
        printf("Average Marks: %.2f\n\n", students[i].average);
    }

    return 0;
}