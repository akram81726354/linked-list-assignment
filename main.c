#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    int ID;
    int day;
    int month;
    int year;
    int score;

} Student;

int N=0;
int n=0;
struct node
{
   Student student;
   struct node* next;
};

Student *stu = NULL;

void Shift( Student* stu1, Student* stu2)
{
    strcpy(stu2->name, stu1->name);
    stu2->ID = stu1->ID;
    stu2->day = stu1->day;
    stu2->month = stu1->month;
    stu2->year = stu1->year;
    stu2->score = stu1->score;
}

void Get_Info(Student* getStudent)
{
//    fflush(stdin);
//    printf("Enter student name: ");
//    while(1 != scanf("%[a-zA-Z ?]+", getStudent->name))
//    {
//        printf("Please Enter a valid input : ");
//        fflush(stdin);
//    }

    fflush(stdin);
    printf("\nEnter student id: ");
    while(1 != scanf("%d", &(getStudent->ID)))
    {
        printf("Please Enter a valid input : ");
        fflush(stdin);
    }
//
//    fflush(stdin);
//    printf("Enter student birthday in format dd/mm/yyyy : ");
//    while(3 != scanf("%d/%d/%d",&(getStudent->day),&(getStudent->month),&(getStudent->year)))
//    {
//        printf("An Error happened\n");
//        printf("Please Enter student birthday in format dd/mm/yyyy : ");
//        fflush(stdin);
//    }
//
//    fflush(stdin);
//    printf("\nEnter student score                       : ");
//    while(1 != scanf("%d", &(getStudent->score)))
//    {
//        printf("Please Enter a valid input : ");
//        fflush(stdin);
//    }
}

void Print_Info()
{ printf("\n*********************\n");
    for (int i=0; i<n ; i++)
        {

            printf("\nThe student ID: %d\n",stu[i].ID);
//    printf("The student name     : %s\n",st[i].name);
//    printf("The student birthday : %d/",st[i].day);
//    printf("%d/",st[i].month);
//    printf("%d\n",st[i].year);
//    printf("The student score    : %d\n",st[i].score);
        }
        printf("\n*********************\n");
}


void insertstudentAtBeginning( int pos )
{
    int i;
    for(i=pos; i>0;i--)
    {
        Shift((stu+(i-1)), (stu+i));
    }

    Get_Info(stu);

    printf("The student is inserted successfully.\n\n");
}

void insertNodeAtEnd( int pos )
{
    Get_Info((stu+pos));

    printf("The student is inserted successfully.\n\n");
}

void insertNodeAtMiddle(int pos )
{
    int i;
    for(i=n; i>pos;i--)
    {
        Shift((stu+(i-1)), (stu+i));
    }

    Get_Info((stu+(pos)));

    printf("The student is inserted successfully.\n\n");
}


int main()
{
    printf ("Enter the total number of nodes: ");
    scanf("%d", &N);
    printf ("\n");
    stu = (Student*)malloc(N*sizeof(Student));

    int k;   int r;
       while (1){
         printf("1.Insert AtBeginning\n2.Insert AtEnd\n3.Insert AtMiddle\n4.Display\n5.Exit\n\nYour choice :");

         scanf("%d", &k);
    switch(k)
    {
    case 1:
        insertstudentAtBeginning( n );
        break;

    case 3:

        printf(" Enter Position :");
        scanf("%d",&r);
        insertNodeAtMiddle( r );
        break;

    case 2:
        insertNodeAtEnd( n );
        break;
    case 4:  Print_Info(); break;
    case 5 : exit(0);
    	 default: printf("\nWrong selection!!! Please try again!!!\n");


    }

    n++;
       }



    return 0;
}

