#include <stdio.h>

#include <vic/base/queue.h>

typedef struct {
    int a;
    vic_queue_node_t node;
    int b;
} demo;

void demo_init(demo *val) {
    val->a = 0;
    vic_queue_node_init(&val->node);
    val->b = 0;
}

void demo_destroy(demo *val) {
}

void print(const vic_queue_t *l) {
    vic_queue_node_t *node;
    for (node = vic_queue_begin(l); node != vic_queue_end(l); node = vic_queue_next(node)) {
        demo *d = vic_queue_data(node, demo, node);
        printf("(%d %d)", d->a, d->b);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    vic_queue_t l;
    vic_queue_init(&l);
    if (vic_queue_empty(&l)) {
        printf("empty\n");
    }
    demo d1;
    demo_init(&d1);
    d1.a = 1;
    vic_queue_push(&l, &d1.node);
    print(&l);
    demo d2;
    demo_init(&d2);
    d2.a = 2;
    vic_queue_push(&l, &d2.node);
    print(&l);

    vic_queue_node_t *node = vic_queue_front(&l);
    demo *d = vic_queue_data(node, demo, node);
    printf("front: (%d %d)\n", d->a, d->b);

    node = vic_queue_back(&l);
    d = vic_queue_data(node, demo, node);
    printf("back: (%d %d)\n", d->a, d->b);

    vic_queue_pop(&l);
    print(&l);
    vic_queue_pop(&l);
    print(&l);
    return 0;
}

