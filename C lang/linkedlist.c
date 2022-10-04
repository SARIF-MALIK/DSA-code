#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};
struct node* head = NULL;

void traverse()
{
    struct node* temp;
 
    // List is empty
    if (head == NULL)
        printf("\nList is empty\n");
 
    // Else print the LL
    else {
        temp = head;
        printf("Entered list is\n");
        while (temp != NULL) {
            printf("Data = %d\n",temp->data);
            temp = temp->next;
        }
    }
}

void insertAtFront()
{
    int val;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &val);
    temp->data = val;
 
    // Pointer of temp will be
    // assigned to start
    temp->next = head;
    head = temp;
}

void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, val, i = 1;
    newnode =(struct node*)malloc(sizeof(struct node));
 
    // Enter the position and data
    printf("\nEnter position and value :");
    scanf("%d %d", &pos, &val);
 
    // Change Links
    temp = head;
    newnode->data = val;
    newnode->next = 0;
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    
    traverse();
   
}


void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
 
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
 
    // Otherwise
    else {
        printf("\nEnter index : ");
 
        // Position to be deleted
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = head;
 
        // Traverse till position
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
 
        // Change Links
        position = temp->next;
        temp->next = position->next;
 
        // Free memory
        free(position);
    }
}

void reverseLL()
{
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;
 
    // If LL is empty
    if (head == NULL)
        printf("List is empty\n");
 
    // Else
    else {
 
        // Traverse the LL
        while (head != NULL) {
 
            // reversing of points
            t2 = head->next;
            head->next = t1;
            t1 = head;
            head = t2;
        }
        head = t1;
 
        // New head Node
        temp = head;
 
        printf("Reversed linked "
               "list is : ");
 
        // Print the LL
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main ()
{
	int choice;
    while (1){

        printf("\t1  For insertion at starting\n");
        printf("\t2  To Traverse the list\n");
        printf("\t3  For insertion at any position\n");
		printf("\t4  For deletion of element at any position\n");
		printf("\t5  To reverse the linked list\n");
		
		printf("\nEnter Choice :\n");
        scanf("%d", &choice);

		switch (choice) {
		    
		 case 1:
            insertAtFront();
            break;
        case 2:
            traverse();
            break;
        case 3:
            insertAtPosition();
            break;
		case 4:
            deletePosition();
            break;
         case 5:
            reverseLL();
            break;
       
      default:
            printf("Incorrect Choice\n");
        }
    }
	return 0;
}

