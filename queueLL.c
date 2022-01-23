#include<stdio.h>
#include<stdlib.h>
struct qnode
{
    int data;
    struct qnode*link;
};
typedef struct qnode qnode;
qnode *getnode(); 
void main()
{
    qnode *front,*rear,*temp;
    int ch,item;
    front=NULL;
    rear=NULL;
    do
    {
        printf("\n1.insert \n2.delete\n3.display\n4.exit");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element to insert");
            scanf("%d",&item);
            temp=getnode();
            temp->data=item;
            temp->link=NULL;
            if(front==NULL)
            {
                front=temp;
                rear=temp;
            }
            else
            {
                rear->link=temp;
                rear=temp;
            }
            break;
           case 2:if(front==NULL)
            {
                printf("empty");
            }
            else
            {
                temp=front;
                item=temp->data;
                front=front->link;
                if(front==NULL)
                rear=NULL;
                free(temp);
            }
            break;
            case 3:if(front==NULL)
            {
                printf("empty");
            }
            else
            {
                printf("queue is \n");
                temp=front;
                while(temp!=NULL)
                {
                    printf("%d\t",temp->data);
                    temp=temp->link;
                }
            }
            break;
            case 4:exit(0);
            break;
            default:printf("wrong choice");

        }
    }
    while(ch!=8);
}
qnode *getnode()
{
    qnode *p;
    p=(qnode *)malloc(sizeof(qnode));
    return p;
}
