#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    INT,
    FUNC,
} TypeTag;

typedef struct Node {
    TypeTag type;
    union {
        int value;
        struct {
            int (*func)(struct Node *);
            struct Node **args;
            int num_args;
        } function;
    } data;
} Node;

Node *makeNodeInt(int value) {
    Node *node = malloc(sizeof(Node));
    node->type = INT;
    node->data.value = value;
    return node;
}

Node *makeNodeFunc(int (*func)(Node *), Node **args, int num_args) {
    Node *node = malloc(sizeof(Node));
    node->type = FUNC;
    node->data.function.func = func;
    node->data.function.args = args;
    node->data.function.num_args = num_args;
    return node;
}

int add(Node *node) {
    int result = 0;
    for (int i = 0; i < node->data.function.num_args; i++) {
        result += node->data.function.args[i]->data.value;
    }
    return result;
}

int mul(Node *node) {
    int result = 1;
    for (int i = 0; i < node->data.function.num_args; i++) {
        result *= node->data.function.args[i]->data.value;
    }
    return result;
}

int sub(Node *node) {
    int result = node->data.function.args[0]->data.value;
    for (int i = 1; i < node->data.function.num_args; i++) {
        result -= node->data.function.args[i]->data.value;
    }
    return result;
}

Node *fibonacci(int n) {
    Node *memo[n + 1];
    for (int i = 0; i <= n; i++) {
        memo[i] = NULL;
    }

    memo[0] = makeNodeInt(0);
    memo[1] = makeNodeInt(1);

    for (int i = 2; i <= n; i++) {
        Node *a = memo[i - 1];
        Node *b = memo[i - 2];
        Node *sum = makeNodeFunc(add, (Node *[]){a, b}, 2);
        memo[i] = sum;
    }

    return memo[n];
}

int main() {
    Node *fib10 = fibonacci(10);
    printf("Fibonacci(10) = %d\n", fib10->data.value);

    Node *fib20 = fibonacci(20);
    printf("Fibonacci(20) = %d\n", fib20->data.value);

    return 0;
}
