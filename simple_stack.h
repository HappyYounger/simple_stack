//
// Created by 杨光 on 2019/2/27.
//

#ifndef SIMPLE_STACK_SIMPLE_STACK_H
#define SIMPLE_STACK_SIMPLE_STACK_H

typedef struct _ADT{
    int n;
}_adt, * _padt;

typedef struct _Stack{

    _padt p_adt;
    int capacity;
    int size;
}_stack, * _pstack;

typedef struct _Linked_ADT{

    int n;
    struct _Linked_ADT * p_prev;
    struct _Linked_ADT * p_next;

}_linked_adt, * _p_linked_adt;

typedef struct _Linked_Stack{

    _p_linked_adt head;
    _p_linked_adt tail;
    int size;
}_linked_stack, * _p_linked_stack;

_padt pop_stack(_pstack pstack);
_padt top_stack(_pstack pstack);
void push_stack(_pstack pstack, _padt padt);

_pstack init_stack(int capacity);
void destroy_stack(_pstack pstack);

_p_linked_adt pop_linked_stack(_p_linked_stack p_linked_stack);
_p_linked_adt top_linked_stack(_p_linked_stack p_linked_stack);
void push_linked_stack(_p_linked_stack p_linked_stack, _p_linked_adt p_linked_adt);

_p_linked_stack init_linked_stack();
void destroy_linked_stack(_p_linked_stack p_linked_stack);

#endif //SIMPLE_STACK_SIMPLE_STACK_H
