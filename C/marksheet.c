#include <stdio.h>
#include <stdbool.h>

int main() {
    char subject[6][15] = { "Tamil", "Math", "English", "Science", "History", "Geography" };

    int subCount = sizeof(subject) / sizeof(subject[0]);
    int marks[subCount], totalMarks = 0; char name[20];

    printf("Enter your Name: ");
    scanf("%s", name);

    bool isPass = true;
    char grades[subCount];

    printf("============================================\n");
    for (int i = 0; i < subCount; i++) {
        printf("Enter Mark for %s: ", subject[i]);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];

        if (marks[i] >= 90) grades[i] = 'A';
        else if (marks[i] >= 80) grades[i] = 'B';
        else if (marks[i] >= 70) grades[i] = 'C';
        else if (marks[i] >= 60) grades[i] = 'D';
        else if (marks[i] >= 50) grades[i] = 'E';
        else {
            grades[i] = 'F';
            isPass = false;
        }
    }
    printf("\n================ RESULT ====================\n");
    for (int i = 0; i < subCount; i++) {
        char* outcome = marks[i] >= 50 ? "Pass" : "Fail";
        printf("%s: %d\tGrade: %c\t%s\n", subject[i], marks[i], grades[i], outcome);
    }
    printf("\nAverage: %.2f", (float)totalMarks / subCount);
    printf("\nResult: %s\n", isPass ? "Pass" : "Fail");
    return 0;
}