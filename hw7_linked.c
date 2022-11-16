#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node *Node;

Node CreateNode(int value)
{
    Node temp;
    temp = (Node)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

// Them phan tu vao vi tri sau cung vua vector

void push_back(Node *head, int value)
{
    Node temp = CreateNode(value);
    Node p = NULL;
    if (*head == NULL)
    {
        *head = temp;
    }else
    {
        p = *head;
        while (p->next != NULL)
        {
             p = p->next;
        }
        p->next = temp;
        
    }
    
}

// lay ra phan tu vi tri thu n cua vector

int at(Node head, int index)
{
    Node p = head;
    int i = 0;
    while (p->next != NULL && i != index )
    {
        p = p->next;
        i++;
    }
    return p->data;
    
}
// bo di phan tu cuoi cung 
void pop_back(Node *head)
{
    Node p = *head;
    int i = 0;
    while (p->next->next != NULL)
    {
        p = p->next;
        i++;
    }
    free(p->next->next);
    p->next = NULL;
    printf("i lan 1 la %d\n",i);
    
}

// bo di tat ca phan tu cua vector

void clear(Node *head)
{
    Node p = *head;
    Node temp = NULL;

    while (p->next != NULL)
     {
        temp = p->next;
        free(p);
        p = temp;
    }  
    free(p);  
}

//lay ra phan tu dau tien cua vector
int front(Node head)
{
    Node p = head;
    return p->data;
}

//lay ra phan tu cuoi cung cua vector
int back(Node head)
{
    Node p = head;
    while (p->next != NULL )
    {
        p = p->next;
    }
    return p->data;
}

// so luong phan tu cua vector
int size(Node head)
{
    Node p = head;
    int i = 1;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    return i;
}


// kiem tra vector co phan tu hay khong
int empty(Node head)
{
    Node p = head;
    if (p = NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}


int main(int argc, char const *argv[])
{
    Node Node1;
    Node1 = NULL;

    push_back(&Node1, 3);
    push_back(&Node1, 4);
    push_back(&Node1, 38);
    push_back(&Node1, 35);
    // printf("Ket qua la %d\n",front(Node1,0));
    // printf("Ket qua la %d\n",front(Node1,1));
    // printf("Ket qua la %d\n",front(Node1,2));
    // printf("Ket qua la %d\n",front(Node1,3));
    // pop_back(&Node1);
    // pop_back(&Node1);
    // pop_back(&Node1);
    // clear(&Node1);
    printf("test la %d\n", front(Node1));
    printf("test la %d\n", back(Node1));
    printf("size la %d\n", size(Node1));
    return 0;
}
