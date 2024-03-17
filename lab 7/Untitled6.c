#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void displayList(struct Node* head) {
    while (head != NULL) {
        printf("Node Data: %d\n", head->data);
        head = head->next;
    }
}

int main() {
    struct Node *head = NULL, *temp;

    for (int i = 1; i <= 3; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i * 10;
        temp->next = head;
        head = temp;
    }

    printf("Linked List Contents:\n");
    displayList(head);

    // Free allocated memory
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

