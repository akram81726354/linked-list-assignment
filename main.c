#include <stdio.h>
#include <stdlib.h>
struct student {
    //int data;
    char Name[50];
    int id;
    int day,month,year;
    int score;
    struct student* next;
} //s[5];
*head;
        void insertstudentAtBeginning();
        void insertNodeAtEnd();
        void displayList();
        void insertNodeAtMiddle(int position);
        void createList(int n);
int main() {
         printf("If you Need to initialize list ,Enter the total number of nodes: ");
        int n;
        scanf("%d", &n);
         createList(n);

    int choice;int position;
       while(1){
            printf("chosse your operation : \n \n");
      printf("1.Insert AtBeginning\n2.Insert AtEnd\n3.Insert AtMiddle\n4.Display\n5.Exit\n\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1:
            insertstudentAtBeginning();
		 break;
	 case 2: insertNodeAtEnd(); break;
	 case 3:  printf("Enter position : "); scanf("%d",&position);
	     insertNodeAtMiddle( position); break;
     case 4: displayList();
	 case 5: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
    //printf("Enter information of students:\n");

    // storing information
    //for (int i = 1; i < 5; ++i) {

        //printf("\n For student %i   ", i );
        //printf("\n Enter first name: ");
        //scanf("%s", s[i].Name);
        //printf("Enter ID: ");
        //scanf("%d", &s[i].id);
        //printf("What is the date of birth:\n");
        //printf("day:"); scanf("%d", &s[i].day);
        //printf("month:"); scanf("%d", &s[i].month);
        //printf("year:"); scanf("%d", &s[i].year);
        //printf("Enter score: ");
        //scanf("%d", &s[i].score);


    return 0;
}


void insertstudentAtBeginning( )
{
    struct student *newNode;

    newNode = (struct student*)malloc(sizeof(struct student));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        //printf("\n Enter first name: ");
        //scanf("%s", newNode->Name);
        printf("Enter ID: ");
        scanf("%d", &newNode->id);
        //printf("What is the date of birth:\n");
        //printf("day:"); scanf("%d", &newNode->day);
        //printf("month:"); scanf("%d", &newNode->month);
        //printf("year:"); scanf("%d", &newNode->year);
       // printf("Enter score: ");
       // scanf("%d", &newNode->score);
        newNode->next = head; // Link address part
        head = newNode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
void insertNodeAtEnd(int data)
{
    struct student *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct student));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
       // printf("\n Enter first name: ");
       // scanf("%s", newNode->Name);
        printf("Enter ID: ");
        scanf("%d", &newNode->id);
       // printf("What is the date of birth:\n");
       // printf("day:"); scanf("%d", &newNode->day);
        //printf("month:"); scanf("%d", &newNode->month);
       // printf("year:"); scanf("%d", &newNode->year);
       // printf("Enter score: ");
       // scanf("%d", &newNode->score);
        newNode->next = NULL;

        temp = head;

        // Traverse to the last node
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; // Link address part

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
/*
 * Creates a new node and inserts at middle of the linked list.
 */
void insertNodeAtMiddle(int position)
{
    int i;
    struct student *newNode, *temp;

    newNode = (struct student*)malloc(sizeof(struct student));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        //printf("\n Enter first name: ");
       // scanf("%s", newNode->Name);
        printf("Enter ID: ");
        scanf("%d", &newNode->id);
       // printf("What is the date of birth:\n");
       // printf("day:"); scanf("%d", &newNode->day);
        //printf("month:"); scanf("%d", &newNode->month);
       // printf("year:"); scanf("%d", &newNode->year);
       // printf("Enter score: ");
        //scanf("%d", &newNode->score);
        newNode->next = NULL;

        temp = head;

        /*
         * Traverse to the n-1 position
         */
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Link address part of new node */
            newNode->next = temp->next;

            /* Link address part of n-1 node */
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}

/*
 * Display entire list
 */
void displayList()
{
    struct student *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            //printf("Name is %s \n", temp->Name); // Print data of current node
            printf("ID is %i \n", temp->id);
            //printf("Birth day is %i", temp->day);printf("/%i", temp->month);printf("/%i\n", temp->year);
            //printf("Score is %i \n", temp->score);
            temp = temp->next;                 // Move to next node
        }
    }
}
void createList(int n)
{
    struct student *newNode, *temp;
    int data, i;

    head = (struct student *)malloc(sizeof(struct student));

    /*
     * If unable to allocate memory for head node
     */
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        /*
         * Input data of node from the user
         */
        printf("Enter the data of node 1: \n");
        //printf("\n Enter first name: ");
       // scanf("%s", head->Name);
        printf("Enter ID: ");
        scanf("%d", &head->id);
       // printf("What is the date of birth:\n");
       // printf("day:"); scanf("%d", &head->day);
        //printf("month:"); scanf("%d", &head->month);
       // printf("year:"); scanf("%d", &head->year);
       // printf("Enter score: ");
        //scanf("%d", &head->score);

        //head->name = name; // Link the data field with data
        //head->id=id;
       // head->day=day; head->month=month; head->year=year;
       // head->score=score;
        head->next = NULL; // Link the address field to NULL

        temp = head;

        /*
         * Creates n nodes and adds to linked list
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct student *)malloc(sizeof(struct student));

            /* If memory is not allocated for newNode */
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                        printf("Enter the data of node : %i\n",i);

        //printf("\n Enter first name: ");
       // scanf("%s", newNode->Name);
        printf("Enter ID: ");
        scanf("%d", &newNode->id);
       // printf("What is the date of birth:\n");
       // printf("day:"); scanf("%d", &newNode->day);
        //printf("month:"); scanf("%d", &newNode->month);
       // printf("year:"); scanf("%d", &newNode->year);
       // printf("Enter score: ");
        //scanf("%d", &newNode->score);

               // newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}
