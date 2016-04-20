#include <stdio.h>

#include <vic/base/forward_list.h>

typedef struct {
    int a;
    vic_forward_list_node_t node;
    int b;
} demo;

void demo_init(demo *val) {
    val->a = 0;
    vic_forward_list_node_init(&val->node);
    val->b = 0;
}

void demo_destroy(demo *val) {
}

void print(const vic_forward_list_t *l) {
    vic_forward_list_node_t *node;
    for (node = vic_forward_list_begin(l); node != vic_forward_list_end(l); node = vic_forward_list_next(node)) {
        demo *d = vic_forward_list_data(node, demo, node);
        printf("(%d %d)", d->a, d->b);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    vic_forward_list_t l;
    vic_forward_list_init(&l);
    if (vic_forward_list_empty(&l)) {
        printf("empty\n");
    }
    demo d1;
    demo_init(&d1);
    d1.a = 1;
    vic_forward_list_insert_after(vic_forward_list_before_begin(&l), &d1.node);
    print(&l);
    demo d2;
    demo_init(&d2);
    d2.a = 2;
    vic_forward_list_push_front(&l, &d2.node);
    print(&l);

    vic_forward_list_node_t *node = vic_forward_list_front(&l);
    demo *d = vic_forward_list_data(node, demo, node);
    printf("front: (%d %d)\n", d->a, d->b);

    vic_forward_list_erase_after(vic_forward_list_begin(&l));
    print(&l);
    vic_forward_list_pop_front(&l);
    print(&l);
    return 0;
}

