#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
typedef struct node node;
node *getnode(); 
main()
{
    node *top,*temp,*current;
    int ch,item;
    top=NULL;
    do
    {
        printf("\n1.push\n2.pop\n3.top\n4.display\n5.exit");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element to insert");
            scanf("%d",&item);
            temp=getnode();
            if(temp==NULL)
            {
                printf("unable");
            }
            else
            {
                temp->data=item;
                temp->link=top;
                top=temp;
            }
            break;
           case 2: if(top==NULL)
            {
                printf("empty");
            }
            else
            {
                current=top;
                item=current->data;
                top=top->link;
                free(current);

            }
            break;
            case 3:if(top==NULL)
            {
                printf("empty");
            }
            else
            {
                printf("top %d",top->data);
            }
            break;
            case 4:if(top==NULL)
            {
                printf("empty");
            }
            else
            {
                current=top;
                while(current!=NULL)
                {
                    printf("%d\t",current->data);
                    current=current->link;
                }
            }
            break;
            case 5:exit(0);
            break;
            default:printf("wrong choice");

        }
    }
    while(ch!=8);
}
node *getnode()
{
    node *p;
    p=(node *)malloc(sizeof(node));
    return p;
}
