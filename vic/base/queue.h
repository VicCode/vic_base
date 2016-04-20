#pragma once

#include <vic/base/predef.h>
#include <vic/base/type.h>

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct vic_queue_node vic_queue_node_t;

struct vic_queue_node {
    vic_queue_node_t *_next;
};

#define vic_queue_node_init(__node) \
    (__node)->_next = nil

#define vic_queue_node_destroy(__node)

typedef struct vic_queue vic_queue_t;

struct vic_queue {
    vic_queue_node_t _node;
    vic_queue_node_t *_back;
};

#define vic_queue_init(__list) \
    (__list)->_node._next = nil; (__list)->_back = &(__list)->_node

#define vic_queue_destroy(__list)

#define vic_queue_empty(__list) \
    ((__list)->_node._next == nil)

#define vic_queue_swap(__lista, __listb) \
    ({ \
        vic_queue_node_t __tmp = (__lista)->_node; \
        (__lista)->_node = (__listb)->_node; \
        (__listb)->_node = __tmp; \
        \
        vic_queue_node_t *__tmpback = (__lista)->_back; \
        (__lista)->_back = (__listb)->_back; \
        (__listb)->_back = __tmpback; \
    })

#define vic_queue_clear(__list) \
    (__list)->_node._next = nil; (__list)->_back = &(__list)->_node

#define vic_queue_front(__list) ((__list)->_node._next)

#define vic_queue_back(__list) \
    ({ \
        vic_queue_node_t *node = nil; \
        if (!vic_queue_empty(__list)) { \
            node = (__list)->_back; \
        } \
        node; /* return current node */ \
    })

#define vic_queue_push(__list, __node) \
    (__node)->_next = nil; \
    (__list)->_back->_next = (__node); \
    (__list)->_back = (__node)

#define vic_queue_pop(__list) \
    ({ \
        vic_queue_node_t *node = (__list)->_node._next; \
        (__list)->_node._next = node->_next; \
        if ((__list)->_back == node) \
        { \
            (__list)->_back = &(__list)->_node; \
        } \
    })

#define vic_queue_begin(__list) (__list)->_node._next

#define vic_queue_end(__list) nil

#define vic_queue_next(__node) (__node)->_next

#define vic_queue_data(__node, __type, __member) \
    (__type *)((vic_byte_t *)(__node) - vic_offsetof(__type, __member))

#ifdef	__cplusplus
}
#endif

