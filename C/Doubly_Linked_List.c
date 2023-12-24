/* Write a program to implement doubly linked list */

# include <stdio.h>
# include <malloc.h>

typedef struct node 
{
    struct node * prev;
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
        tmp->prev = NULL;
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
        {
            tmp->prev = tmp;
            tmp->next = tmp;
            head = tmp;
        }

        else
        {
            tmp->prev = head->prev;
            tmp->next = head;
            head->prev->next = tmp;
            head->prev = tmp;
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
        {
            tmp->next = tmp;
            tmp->prev = tmp;
            head = tmp;
        }
        
        else 
        {
            tmp->prev = head->prev;
            tmp->prev->next = tmp;
            head->prev = tmp;
            tmp->next = head;
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

        while(ptr->data != element && ptr->next != head)
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
                ptr->next->prev = tmp;
                tmp->next = ptr->next;
                tmp->prev = ptr;
                ptr->next = tmp;
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

        if(head->next == head)
            head = NULL;
        
        else
        {
            head->prev->next = head->next;
            head->next->prev = head->prev;
            head = head->next;
        }
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
        node * tmp = head->prev;

        if(head->next == head)
            head = NULL;

        else
        {
            tmp->prev->next = head;
            head->prev = tmp->prev;
        }
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
        int element;

        printf("\n Enter element which you want to delete: ");
        scanf("%d", &element);

        while(tmp->data != element && tmp->next != head)
            tmp = tmp->next;

        if(tmp->data != element)
            printf("\n Specific element doesn't belong to list \n");

        else
        {
            if(head->next == head)
                head = NULL;
            
            else
            {
                tmp->prev->next = tmp->next;
                tmp->next->prev = tmp->prev;

                if(head == tmp)
                    head = head->next;
            }
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
        while(tmp->next != head)
        {
            printf(" %d ", tmp->data);
            tmp = tmp->next;
        }
        printf(" %d \n", tmp->data);    // last element
    }
}

void back_track()
{
    if(head == NULL)
        printf("\n List is empty, can't back track \n");
    
    else
    {
        printf("\n Elements of List \n");
        node * tmp = head->prev;
        while(tmp->prev != head->prev)
        {
            printf(" %d ", tmp->data);
            tmp = tmp->prev;
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
        printf("\n Doubly Linked List");
        printf("\n 1 :: Insert at Begin");
        printf("\n 2 :: Insert at End");
        printf("\n 3 :: Insert after given element");
        printf("\n 4 :: Delete from Begin");
        printf("\n 5 :: Delete form End");
        printf("\n 6 :: Delete given element");
        printf("\n 7 :: Traverse");
        printf("\n 8 :: Back Track");
        printf("\n 9 :: Exit");
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
                back_track();
                break;
            case 9:
                printf("\n Exiting... \n");
                break;
            default:
                printf("\n ! ! ! Invalid choice ! ! ! \n");
        }

    }while(opt != 9);
}

void main()
{
    linked_list_app();
}
