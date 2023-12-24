/* Write a program to implement singly linked list */

# include <stdio.h>
# include <malloc.h>

typedef struct node 
{
    int data;
    struct node * next;
} node;

node * head = NULL;

node * create_node(int data)
{
    node * tmp = NULL;
    
    tmp = (node *)(malloc(sizeof(node)));
    if(tmp == NULL)
        printf("\n ! ! ! Insufficient Memory ! ! ! \n");
    
    else
    {
        tmp->data = data;
        tmp->next = NULL;
    }

    return tmp;
}

void insert_at_begin()
{
    node * tmp = NULL;
    int data;

    printf("Enter an element to insert in list: ");
    scanf("%d", &data);

    tmp = create_node(data);
    
    if(tmp != NULL)
    {
        if(head == NULL)
            head = tmp;
        
        else
        {
            tmp->next = head;
            head = tmp;
        }
        
        printf("\n Element inserted successfully \n");
    }
}

void insert_at_end()
{
    node * tmp = NULL;
    int data;

    printf("Enter an element to insert in list: ");
    scanf("%d", &data);

    tmp = create_node(data);
    
    if(tmp != NULL)
    {
        if(head == NULL)
            head = tmp;
        
        else 
        {
            node * ptr = head;

            while(ptr->next != NULL)
                ptr  = ptr->next;
            
            ptr->next = tmp;
        }
        
        printf("\n Element inserted successfully \n");
    }
}

void insert_after()
{
    if(head == NULL)
        printf("\n List is empty, can't insert after specific element \n");
    
    else
    {
        node * ptr = head;
        int element;

        printf("\n Enter element after which you want to insert: ");
        scanf("%d", &element);

        while(ptr->data != element && ptr->next != NULL)
            ptr = ptr->next;

        if(ptr->data != element)
            printf("\n Specific element doesn't belong to list \n");

        else
        {
            node * tmp = NULL;

            printf("\n Enter an element to insert: ");
            scanf("%d", &element);

            tmp = create_node(element);
            if(tmp != NULL)
            {
                if(ptr->next == NULL)
                    ptr->next = tmp;

                else
                {
                    tmp->next = ptr->next;
                    ptr->next = tmp;
                }
            }
            
            printf("\n Element inserted successfully \n");
        }
    }
}

void delete_from_begin()
{
    if(head == NULL)
        printf("\n List is empty, can't perform deletion \n");

    else
    {
        node * tmp = head;

        if(head->next == NULL)
            head = NULL;
        
        else
            head = head->next;
        
        free(tmp);
        
        printf("\n Element deleted successfully \n");
    }
}

void delete_from_end()
{
    if(head == NULL)
        printf("\n List is empty, can't perform deletion \n");

    else
    {
        node * tmp = head;
        node * ptr = tmp;

        while(tmp->next != NULL)
        {
            ptr = tmp;
            tmp = tmp->next;
        }

        if(ptr == head)
            head = NULL;
        
        else    
            ptr->next = NULL;

        free(tmp);
        
        printf("\n Element deleted successfully \n");
    }
}

void delete_given()
{
    if(head == NULL)
        printf("\n List is empty, can't preform deletion \n");
    
    else
    {
        node * tmp = head;
        node * ptr = tmp;
        int element;

        printf("\n Enter element which you want to delete: ");
        scanf("%d", &element);

        while(tmp->data != element && tmp->next != NULL)
        {
            ptr = tmp;
            tmp = tmp->next;
        }

        if(tmp->data != element)
            printf("\n Specific element doesn't belong to list \n");

        else
        {
            if(ptr == head)
                head = head->next;
            
            else if(tmp->next == NULL)
                ptr->next = NULL;
            
            else
                ptr->next = tmp->next;

            free(tmp);
            printf("\n Element deleted successfully \n");
        }
    }
}

void traverse()
{
    if(head == NULL)
        printf("\n List is empty, can't perform traverse \n");
    
    else
    {
        printf("\n Elements of List \n");
        node * tmp = head;
        for(; tmp->next != NULL; tmp = tmp->next)
        {
            printf(" %d ", tmp->data);
        }
        printf(" %d \n", tmp->data);    // last element
    }
}

void linked_list_app()
{
    int opt = 0;

    do
    {
        printf("\n =====================");
        printf("\n Singly Linked List");
        printf("\n 1 :: Insert at Begin");
        printf("\n 2 :: Insert at End");
        printf("\n 3 :: Insert after given element");
        printf("\n 4 :: Delete from Begin");
        printf("\n 5 :: Delete form End");
        printf("\n 6 :: Delete given element");
        printf("\n 7 :: Traverse");
        printf("\n 8 :: Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                insert_at_begin();
                traverse();
                break;
            case 2:
                insert_at_end();
                traverse();
                break;
            case 3:
                insert_after();
                traverse();
                break;
            case 4:
                delete_from_begin();
                traverse();
                break;
            case 5:
                delete_from_end();
                traverse();
                break;
            case 6:
                delete_given();
                traverse();
                break;
            case 7:
                traverse();
                break;
            case 8:
                printf("\n Exiting... \n");
                break;
            default:
                printf("\n ! ! ! Invalid choice ! ! ! \n");
        }

    }while(opt != 8);
}

void main()
{
    linked_list_app();
}