#include <stdio.h>
#include <stdbool.h>

int main() {

    char subject[10][10] = { "Math", "English", "Science", "History", "Geography" };
    int marks[5], totalMarks = 0;

    printf("Enter your Name: ");
    char name[20];
    scanf("%s", name);

    bool isPass = true;
    char grades[5];

    printf("============================================\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter Mark for %s: ", subject[i]);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];

        if (marks[i] >= 90) {
            grades[i] = 'A';
        }
        else if (marks[i] >= 80) {
            grades[i] = 'B';
        }
        else if (marks[i] >= 70) {
            grades[i] = 'C';
        }
        else if (marks[i] >= 60) {
            grades[i] = 'D';
        }
        else if (marks[i] >= 50) {
            grades[i] = 'E';
        }
        else {
            grades[i] = 'F';
            isPass = false;
        }
    }

    printf("\n================ RESULT ====================\n");
    for (int i = 0; i < 5; i++) {
        char* outcome = marks[i] >= 50 ? "Pass" : "Fail";
        printf("%s: %d\tGrade: %c\t%s\n", subject[i], marks[i], grades[i], outcome);
    }

    printf("\nAverage: %.2f", (float)totalMarks / 5);
    printf("\nResult: %s\n", isPass ? "Pass" : "Fail");
    return 0;
}