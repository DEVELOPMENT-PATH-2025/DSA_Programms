#include <stdio.h>
#include <stdlib.h>

// Node structure for Linked List and Binary Tree
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* left;
    struct Node* right;
} Node;

// Stack and Queue structures
#define MAX 100
int stack[MAX], top = -1;
int queue[MAX], front = -1, rear = -1;

// Function declarations
void arrayOperations();
void linkedListOperations();
void stackOperations();
void queueOperations();
void binaryTreeOperations();

// Helper functions for linked list
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Main function with menu
int main() {
    int choice;
    while (1) {
        printf("\n--- DATA STRUCTURE MENU ---\n");
        printf("1. Array Operations\n");
        printf("2. Linked List Operations\n");
        printf("3. Stack Operations\n");
        printf("4. Queue Operations\n");
        printf("5. Binary Tree Operations\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: arrayOperations(); break;
            case 2: linkedListOperations(); break;
            case 3: stackOperations(); break;
            case 4: queueOperations(); break;
            case 5: binaryTreeOperations(); break;
            case 6: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// --- Array Operations ---
void arrayOperations() {
    int arr[MAX], n, choice, i, pos, element;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position and element to insert: ");
                scanf("%d %d", &pos, &element);
                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position!\n");
                    break;
                }
                for (i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = element;
                n++;
                printf("Element inserted successfully.\n");
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                for (i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted successfully.\n");
                break;

            case 3:
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
                return;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// --- Linked List Operations ---
void linkedListOperations() {
    Node* head = NULL;
    Node *temp, *newNode;
    int choice, data, pos;

    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at End\n");
        printf("2. Delete from Front\n");
        printf("3. Display\n");
        printf("4. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                newNode = createNode(data);
                if (head == NULL) {
                    head = newNode;
                } else {
                    temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
                printf("Node inserted successfully.\n");
                break;

            case 2:
                if (head == NULL) {
                    printf("List is empty!\n");
                } else {
                    temp = head;
                    head = head->next;
                    free(temp);
                    printf("Node deleted successfully.\n");
                }
                break;

            case 3:
                if (head == NULL) {
                    printf("List is empty!\n");
                } else {
                    temp = head;
                    printf("Linked List: ");
                    while (temp != NULL) {
                        printf("%d -> ", temp->data);
                        temp = temp->next;
                    }
                    printf("NULL\n");
                }
                break;

            case 4:
                return;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// --- Stack Operations ---
void stackOperations() {
    int choice, data;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == MAX - 1) {
                    printf("Stack Overflow!\n");
                } else {
                    printf("Enter data to push: ");
                    scanf("%d", &data);
                    stack[++top] = data;
                    printf("Element pushed successfully.\n");
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack Underflow!\n");
                } else {
                    printf("Popped element: %d\n", stack[top--]);
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack is empty!\n");
                } else {
                    printf("Stack elements: ");
                    for (int i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                return;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// --- Queue Operations ---
void queueOperations() {
    int choice, data;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == MAX - 1) {
                    printf("Queue Overflow!\n");
                } else {
                    printf("Enter data to enqueue: ");
                    scanf("%d", &data);
                    if (front == -1) front = 0;
                    queue[++rear] = data;
                    printf("Element enqueued successfully.\n");
                }
                break;

            case 2:
                if (front == -1 || front > rear) {
                    printf("Queue Underflow!\n");
                } else {
                    printf("Dequeued element: %d\n", queue[front++]);
                }
                break;

            case 3:
                if (front == -1 || front > rear) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                return;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// --- Binary Tree Operations ---
Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void binaryTreeOperations() {
    Node* root = NULL;
    int choice, data;

    while (1) {
        printf("\nBinary Tree Operations:\n");
        printf("1. Insert\n");
        printf("2. Display (Inorder Traversal)\n");
        printf("3. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                printf("Node inserted successfully.\n");
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 3:
                return;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}