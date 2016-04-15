#pragma once

#include <vic/base/predef.h>
#include <vic/base/type.h>

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct vic_list_node vic_list_node_t;

struct vic_list_node {
    vic_list_node_t *_prev;
    vic_list_node_t *_next;
};

#define vic_list_node_init(__node) \
    (__node)->_prev = nil; \
    (__node)->_next = nil

#define vic_list_node_destroy(__node)

typedef struct vic_list vic_list_t;

struct vic_list {
    vic_list_node_t _node;
};

#define vic_list_init(__list) \
    (__list)->_node._prev = &(__list)->_node; \
    (__list)->_node._next = &(__list)->_node

#define vic_list_destroy(__list)

#define vic_list_empty(__list) \
    ((__list)->_node._next == &(__list)->_node)

inline static void vic_list_insert(vic_list_node_t *__position_node, vic_list_node_t *__node) {
    __node->_next = __position_node;
    __node->_prev = __position_node->_prev;
    __position_node->_prev->_next = __node;
    __position_node->_prev = __node;
}

#define vic_list_push_front(__list, __node) vic_list_insert((__list)->_node._next, __node)

#define vic_list_push_back(__list, __node) vic_list_insert(&(__list)->_node, __node)

inline static void vic_list_erase(vic_list_node_t *__node) {
    __node->_next->_prev = __node->_prev;
    __node->_prev->_next = __node->_next;
    __node->_prev = nil;
    __node->_next = nil;
}

#define vic_list_pop_front(__list) \
    ({ \
        vic_list_node_t *node = (__list)->_node._next; \
        vic_list_erase(node); \
        node; /* return current node */ \
    })

#define vic_list_pop_back(__list) \
    ({ \
        vic_list_node_t *node = (__list)->_node._prev; \
        vic_list_erase(node); \
        node; /* return current node */ \
    })

// iteration
#define vic_list_begin(__list) (__list)->_node._next

#define vic_list_end(__list) (&(__list)->_node)

#define vic_list_next(__node) (__node)->_next

#define vic_list_prev(__node) (__node)->_prev

// reverse iteration
#define vic_list_rbegin(__list) (__list)->_node._prev

#define vic_list_rend(__list) (&(__list)->_node)

#define vic_list_rnext(__node) (__node)->_prev

#define vic_list_rprev(__node) (__node)->_next

#define vic_list_data(__node, __type, __member) \
    (__type *)((vic_byte_t *)(__node) - vic_offsetof(__type, __member))

#ifdef	__cplusplus
}
#endif

