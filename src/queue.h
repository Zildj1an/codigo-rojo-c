#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#include "mars.h"

struct queue {
    struct queue_node *front;
    struct queue_node *back;
    size_t len;
};

struct queue_node {
    addr_t addr;
    struct queue_node *prev;
};

void queue_init(struct queue *q);
void queue_del(struct queue *q);
void queue_push_back(struct queue *q, int addr);
addr_t queue_pop_front(struct queue *q);

#endif
