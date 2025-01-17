#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char question[100];
    char options[4][50];
    char correctAnswer;
} Question;

int main()
{
    Question quiz[] = {
        {"Who is the best coder in our class?", {"A. Munna", "B. Efat", "C. Rayhan", "D. Shimul"}, 'D'},
        {"Which programming language is used for system programming?", {"A. Python", "B. C", "C. Java", "D. Ruby"}, 'B'},
        {"Which of the following is not a programming language?", {"A. Python", "B. HTML", "C. Java", "D. C++"}, 'B'},
    };
    int score = 0;
    int numQuestions = sizeof(quiz) / sizeof(quiz[0]);

    printf("Welcome to the Quiz Game!\n");
    for (int i = 0; i < numQuestions; i++)
    {
        printf("\nQ%d: %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", quiz[i].options[j]);
        }
        printf("Your answer: ");
        char answer;
        scanf("%c", &answer);
        getchar();

        if (toupper(answer) == quiz[i].correctAnswer)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong! The correct answer was %c.\n", quiz[i].correctAnswer);
        }
    }

    printf("\nYour total score: %d/%d\n", score, numQuestions);
    return 0;
}
