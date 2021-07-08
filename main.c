#include <stdio.h>
struct student {
    char Name[50];
    int id;
    int day,month,year;
    int score;
} s[5];

int main() {

    printf("Enter information of students:\n");

    // storing information
    for (int i = 1; i < 5; ++i) {

        printf("\n For student %i   ", i );
        printf("\n Enter first name: ");
        scanf("%s", s[i].Name);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("What is the date of birth:\n");
        printf("day:"); scanf("%d", &s[i].day);
        printf("month:"); scanf("%d", &s[i].month);
        printf("year:"); scanf("%d", &s[i].year);
        printf("Enter score: ");
        scanf("%d", &s[i].score);
    }

    return 0;
}
