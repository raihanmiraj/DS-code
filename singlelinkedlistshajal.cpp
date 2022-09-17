// Single Linked List Operations

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* root=NULL;
int len;

void append(void);
int length(void);
void display(void);
void deletef(void);
void addatafter(void);


int main()
{
    int ch;
    while(1)
    {
        printf("Single link list operations : \n");
        printf("1. Append\n");
        printf("2. Add data at After\n");
        printf("3. Length\n");
        printf("4. Display\n");
        printf("5. Deletef \n");
        printf("6. Quit\n");

        printf("Enter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                append();
                break;

            case 2:
                addatafter();
                break;
            case 3:
                len = length();
                printf("The lenght of the LINKED LIST is %d\n",len);
                break;
            case 4:
                display();
                break;
            case 5:
                deletef();
                break;
            case 6:
                 exit(1);
            default:
                printf("Wrong keyword\n");

        }
        printf("\n");
    }
}


void deletef()
{
    struct node * temp;
    int loc;
    printf("Enter the location to deletef : ");
    scanf("%d",&loc);

    if(loc>length())
    {
        printf("invalid Location.\n");
        printf("The list size is %d .\n",length());
    }
    else  if (loc == 1)
    {
        temp = root ;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else
    {
        struct node *p, *q;
        p= root;
        int i=1;
        while(i< (loc-1))
        {
            p = p->link;
            i++;
        }

        q = p->link;
        p->link = q ->link;
        q-> link = NULL;
        free(q);

    }
}

void addatafter()
{
    struct node *temp,*p;
    int loc,i=1;
    printf("Enter location after where you want to add:  ");
    scanf("%d",&loc);

    if(loc>length())
    {
        printf("Invalid location.\n");
        printf("Currenty list is having %d nodes.\n",length());
    }
    else
    {
        p = root;
        while(i<loc)
        {
            p = p->link;
            i++;
        }
        temp = (struct node*) malloc(sizeof(struct node));
        temp->link = p->link;
        p->link = temp ;
        printf("Enter data: ");
        scanf("%d",&temp->data);


    }
}

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter node data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if(root == NULL) //the list is empty
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->link != NULL)
        {
            p= p->link;
        }
        p->link = temp;
    }
}

int length()
{
    struct node* temp;
    int count =0;
    temp = root;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;

    }

    return count ;


}


void display()
{
    struct node * temp;
    temp = root;
    if(temp==NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
       while(temp!=NULL )
       {
           printf("%d-->",temp->data);
           temp = temp->link;
       }
       printf("\n\n");
    }

}