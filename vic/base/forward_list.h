#pragma once

#include <vic/base/predef.h>
#include <vic/base/type.h>

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct vic_forward_list_node vic_forward_list_node_t;

struct vic_forward_list_node {
    vic_forward_list_node_t *_next;
};

#define vic_forward_list_node_init(__node) \
    (__node)->_next = nil

#define vic_forward_list_node_destroy(__node)

typedef struct vic_forward_list vic_forward_list_t;

struct vic_forward_list {
    vic_forward_list_node_t _node;
};

#define vic_forward_list_init(__list) \
    (__list)->_node._next = nil

#define vic_forward_list_destroy(__list)

#define vic_forward_list_empty(__list) \
    ((__list)->_node._next == nil)

#define vic_forward_list_swap(__lista, __listb) \
    ({ \
        vic_forward_list_node_t __tmp = (__lista)->_node; \
        (__lista)->_node = (__listb)->_node; \
        (__listb)->_node = __tmp; \
    })

#define vic_forward_list_clear(__list) \
    (__list)->_node._next = nil

#define vic_forward_list_front(__list) vic_forward_list_before_begin(__list)->_next

inline static void vic_forward_list_insert_after(vic_forward_list_node_t *__position_node, vic_forward_list_node_t *__node) {
    __node->_next = __position_node->_next;
    __position_node->_next = __node;
}

#define vic_forward_list_push_front(__list, __node) \
    vic_forward_list_insert_after(vic_forward_list_before_begin(__list), __node)

inline static void vic_forward_list_erase_after(vic_forward_list_node_t *__node) {
    __node->_next = __node->_next->_next;
}

#define vic_forward_list_pop_front(__list) \
    vic_forward_list_erase_after(vic_forward_list_before_begin(__list))

// iteration
#define vic_forward_list_before_begin(__list) (&(__list)->_node)

#define vic_forward_list_begin(__list) (__list)->_node._next

#define vic_forward_list_end(__list) nil

#define vic_forward_list_next(__node) (__node)->_next

#define vic_forward_list_data(__node, __type, __member) \
    (__type *)((vic_byte_t *)(__node) - vic_offsetof(__type, __member))

#ifdef	__cplusplus
}
#endif

