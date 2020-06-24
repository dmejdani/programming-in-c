/*
    JTSK-320112
    a6_p3.c
    Desar Mejdani
    d.mejdani@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_to_node(Item item, Node *pn);
static void copy_to_item(Node *pn, Item *pi);

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// return -1 if full
	if (queue_is_full(pq))
	{
		printf("Queue overflow!\n");
		return -1;
	}

	// new node
	Node *n;
	n = (Node *)malloc(sizeof(Node));
	if (n == NULL)
	{
		printf("Error allocating memory\n");
		exit(1);
	}
	copy_to_node(item, n);
	n->next = NULL;

	// if empty queue
	if (queue_is_empty(pq))
	{
		pq->front = n;
	}
	// if not empty
	else
	{
		pq->rear->next = n;
	}

	// changing the rear pointer
	pq->rear = n;
	pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// empty que
	if (queue_is_empty(pq))
	{
		printf("Queue Underflow!\n");
		return -1;
	}

	// temp node
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	if (temp == NULL)
	{
		printf("Error allocating memory\n");
		exit(1);
	}
	temp = pq->front;

	// copying to item
	copy_to_item(pq->front, pitem);
	// changing the front pointer
	pq->front = pq->front->next;
	// freeing the node
	free(temp);

	// if empty que
	if (queue_is_empty(pq))
	{
		pq->front = NULL;
		pq->rear = NULL;
	}

	// decreasing the items
	pq->items--;

    return 0;
}

// printing function
void printq(Queue pq)
{
	// if empty
	if(pq.items == 0)
	{
		return;
	}

	// printing the item of each node
	while (pq.front)
	{
		printf("%d ", pq.front->item);
		pq.front = pq.front->next;
	}
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

static void copy_to_node(Item item, Node *pn)
{
	pn->item = item;
}

static void copy_to_item(Node *pn, Item *pi)
{
	*pi = pn->item;
}
