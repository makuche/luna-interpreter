#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *data;
    struct Node *next;
    struct Node *prev;
} Node;

Node* createNode(const char* str) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = strdup(str);
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

int main() {
    Node *head = NULL;
    return 0;
}