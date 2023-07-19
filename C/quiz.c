
#include <stdio.h>
#include <stdlib.h>
#include "data.c"

#include <stdio.h>

int main(void) {

    int answer, marks = 0; char proceed;

    system("clear");

    printf("\n\nChoose a quiz:\n");
    for (int i = 0; i < 5; i++) printf("\n%d. %s", i + 1, languages[i]);

    printf("\n\nEnter your choice: ");
    scanf("%d", &answer);
    Question* list = quizList[answer - 1];

    for (int i = 0; i < 5; i++) {
        system("clear");

        Question question = list[i];

        printf("\n\n%s\n\n", question.ask);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, question.options[j]);
        }
        printf("\n=================================================\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        printf("Your answer is %s\n"RESET, (question.answer + 1 == answer) ? GREEN"CORRECT" : RED"WRONG");
        if (question.answer + 1 == answer) marks++;
        printf("=================================================\n\n");

        printf("Correct Answer is: %s\n\n", question.options[question.answer]);
        printf("Proceed [y/n]? ");
        scanf(" %c", &proceed);

        if (proceed == 'n') break;
    }

    printf(YELLOW"\n\nYour score is %d/5\n\n"RESET, marks);

    return 0;
}