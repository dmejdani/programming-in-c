struct node
{
	int value;
	struct node *next;
}

void add_end(struct node **root, int number) 
{ 
	int index;

	if (number % 2 == 1)
		index = 0;
	else 
		index = 1;

	struct node *last = *root[index];

	// struct node** head_ref

    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node)); 
   
    /* 2. put in the data  */
    new_node->value  = number; 
  
    /* 3. This new node is going to be the last node, so make next  
          of it as NULL*/
    new_node->next = NULL; 
  
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*root[index] == NULL) 
    { 
       *root[index] = new_node; 
       return; 
    }   
       
    /* 5. Else traverse till the last node */
    while (last->next != NULL) 
        last = last->next; 
   
    /* 6. Change the next of last node */
    last->next = new_node; 
    return;     
}

void print(struct node **root)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		struct node *tmp = *root[i];
		if (tmp == NULL)
			printf("Linked list is empty\n");
		for (tmp; tmp != NULL; tmp = tmp->next)
		{
			printf("%d\n", tmp->value);
		}
	}
}
