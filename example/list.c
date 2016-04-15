#include <stdio.h>

#include <vic/base/list.h>

typedef struct {
    int a;
    vic_list_node_t node;
    int b;
} demo;

void demo_init(demo *val) {
    val->a = 0;
    vic_list_node_init(&val->node);
    val->b = 0;
}

void demo_destroy(demo *val) {
}

void print(const vic_list_t *l) {
    for (vic_list_node_t *node = vic_list_begin(l); node != vic_list_end(l); node = vic_list_next(node)) {
        demo *d = vic_list_data(node, demo, node);
        printf("(%d %d)", d->a, d->b);
    }
    printf("\n");
}

void rprint(const vic_list_t *l) {
    for (vic_list_node_t *node = vic_list_rbegin(l); node != vic_list_rend(l); node = vic_list_rnext(node)) {
        demo *d = vic_list_data(node, demo, node);
        printf("(%d %d)", d->a, d->b);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    vic_list_t l;
    vic_list_init(&l);
    if (vic_list_empty(&l)) {
        printf("empty\n");
    }
    demo d1;
    demo_init(&d1);
    d1.a = 1;
    vic_list_insert(vic_list_begin(&l), &d1.node);
    print(&l);
    demo d2;
    demo_init(&d2);
    d2.a = 2;
    vic_list_push_front(&l, &d2.node);
    print(&l);
    demo d3;
    demo_init(&d3);
    d3.a = 3;
    vic_list_push_back(&l, &d3.node);
    print(&l);

    rprint(&l);

    vic_list_pop_front(&l);
    print(&l);
    vic_list_pop_back(&l);
    print(&l);
    vic_list_erase(vic_list_begin(&l));
    print(&l);
    return 0;
}

