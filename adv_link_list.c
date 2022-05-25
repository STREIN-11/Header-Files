#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *newNode(int data){
    struct Node *nodee = (struct Node *)malloc(sizeof(struct Node));
    nodee->data = data;
    nodee->next = NULL;
    printf("The Data is : %d\n", nodee->data);
}

int main(){
    int size, n;
    printf("How Many Time : ");
    scanf("%d", &size);
    printf("Enter Element : ");
    for (int i = 0; i < size; i++){
        scanf("%d", &n);
        newNode(n);
    }
    return 0;
}
