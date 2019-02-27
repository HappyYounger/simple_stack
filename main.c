#include <stdio.h>

#include "simple_stack.h"

int main() {

    _p_linked_stack p_linked_stack = init_linked_stack();

    _linked_adt test[9];

    for (int i = 0; i < 9; ++i) {

        test[i].n = i * 2;

        push_linked_stack(p_linked_stack, test + i);
    }

    for (int j = 0; j < 5; ++j) {

        pop_linked_stack(p_linked_stack);
    }

    destroy_linked_stack(p_linked_stack);

    return 0;
}