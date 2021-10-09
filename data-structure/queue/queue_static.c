/**
 * Queue Data Structure with Linked List
 * @author Ramon Almeida
 * @date 2021-10-09
 */


#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LENNAME 15

#define NEXTPOSI(v, m) ((v) % (m))

typedef struct _Queue Queue;

typedef struct _Item Item;

struct _Item {
    char name[LENNAME];
};

struct _Queue {
    int p_s, p_e, size;
    struct _Item *items;
};

Queue *create_queue(int size);

int is_empty(Queue *queue);

int is_full(Queue *queue);

int enqueue(Queue *queue, char *name);

char *dequeue(Queue *queue);

void queue_show(Queue *queue);

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

Queue *create_queue(int size) {

    if (size < 1)
        return NULL;

    size++;
    Queue *queue = malloc(sizeof(Queue));

    if (!queue)
        return NULL;

    queue->items = malloc((sizeof(Item) * size));

    if (!queue->items) {
        free(queue);
        return NULL;
    }

    queue->p_s = queue->p_e = 0;
    queue->size = size;

    return queue;
}

int is_empty(Queue *queue) { return queue->p_s == queue->p_e; }

int is_full(Queue *queue) {
    return NEXTPOSI(queue->p_e + 1, queue->size) == queue->p_s;
}

int enqueue(Queue *queue, char *name) {

    if (is_full(queue))
        return 0;

    strncpy(queue->items[queue->p_e].name, name, LENNAME);
    queue->p_e = NEXTPOSI(queue->p_e + 1, queue->size);

    return 1;
}

char *dequeue(Queue *queue) {

    if (is_empty(queue))
        return NULL;

    char *name = malloc(LENNAME);
    strncpy(name, queue->items[queue->p_s].name, LENNAME);
    queue->p_s = NEXTPOSI(queue->p_s + 1, queue->size);

    return name;
}

void queue_show(Queue *queue) {

    printf("Queue Status\n");

    if (is_empty(queue)) {
        printf(" -> Is Empty <-\n\n");
        return;
    }

    printf(" -> ");
    for (int i = queue->p_s; i != queue->p_e; i = NEXTPOSI(i + 1, queue->size))
        printf("%s, ", queue->items[i].name);
    printf("\n\n");
}