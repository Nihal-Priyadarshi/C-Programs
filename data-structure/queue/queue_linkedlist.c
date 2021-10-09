/**
 * Queue Data Structure with Linked List
 * @author Ramon Almeida
 * @date 2021-10-09
 */


#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LENNAME 15

typedef struct _Queue Queue;

typedef struct _Item Item;

struct _Item {
    char name[LENNAME];
    struct _Item *next;
};

struct _Queue {
    struct _Item head, *last;
};

Queue *create_queue();

int is_empty(Queue *queue);

int enqueue(Queue *queue, char *name);

char *dequeue(Queue *queue);

void queue_show(Queue *queue);

Item *create_item(char *name);

int main(int argc, char const *argv[]) {

    Queue *queue = create_queue(5);

    enqueue(queue, "Joseph");
    enqueue(queue, "Maria");
    enqueue(queue, "Bob");
    queue_show(queue);

    printf("DEQUEUE: %s\n\n", dequeue(queue));
    printf("DEQUEUE: %s\n\n", dequeue(queue));
    printf("DEQUEUE: %s\n\n", dequeue(queue));
    queue_show(queue);

    enqueue(queue, "Robert");
    enqueue(queue, "Kirk");
    queue_show(queue);

    printf("DEQUEUE: %s\n\n", dequeue(queue));
    queue_show(queue);

    return 0;
}

Queue *create_queue() {

    Queue *queue = malloc(sizeof(Queue));

    if (!queue)
        return NULL;

    queue->head.next = NULL;
    queue->last = &queue->head;

    return queue;
}

int is_empty(Queue *queue) { return !queue->head.next; }

int enqueue(Queue *queue, char *name) {

    Item *item = create_item(name);

    if (!item)
        return 0;

    queue->last->next = item;
    queue->last = queue->last->next;

    return 1;
}

char *dequeue(Queue *queue) {

    if (is_empty(queue))
        return NULL;

    Item *item = queue->head.next;
    queue->head.next = item->next;

    if (!queue->head.next)
        queue->last = &queue->head;

    char *name = malloc(LENNAME);
    strncpy(name, item->name, LENNAME);
    free(item);

    return name;
}

void queue_show(Queue *queue) {

    printf("Queue Status\n");

    if (is_empty(queue)) {
        printf(" -> Is Empty <-\n\n");
        return;
    }

    printf(" -> ");
    for (Item *item = queue->head.next; item; item = item->next)
        printf("%s, ", item->name);
    printf("\n\n");
}

Item *create_item(char *name) {

    Item *item = malloc(sizeof(Item));

    if (!item)
        return NULL;

    strncpy(item->name, name, LENNAME);
    item->next = NULL;

    return item;
}