
void delete_specified()
    {
        struct node *ptr, *ptr1;
        int loc,i;
        scanf("%d",&loc);
        ptr=head;
        for(i=0;i<loc;i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;

            if(ptr == NULL)
            {
                printf("\nThere are less than %d elements in the list..\n",loc);
                return;
            }
        }
        ptr1 ->next = ptr ->next;
        free(ptr);
        printf("\nDeleted %d node ",loc);
    }
