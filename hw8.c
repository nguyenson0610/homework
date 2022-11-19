#include<stdio.h>
#include<stdint.h>

#define    MAX    5

int count = -1;

uint8_t stacks[MAX];

void push(uint8_t data)
{
    count++;
    stacks[count] = data;
}

void pop()
{
    stacks[count] = '\0';
    count--;
}

uint8_t top()
{
    return stacks[count];
}

void IsEmpty()
{
    if (count == -1)
    {
        printf("Empty!!!");
    }else
    {
        printf("Not Empty");
    }
}

int size()
{
    return count + 1;
}

void IsFull()
{
    if (count + 1 == MAX)
    {
        printf("FULL!!!");
    }else
    {
        printf("NOT FULL");
    }
    
}


int main(int argc, char const *argv[])
{
    push(4);
    push(45);
    push(12);
    push(120);
    printf("kp la %d\n",  top());
    pop();
    printf("kp la %d\n",  top());
    printf("size la %d\n", size());
    IsEmpty();
    IsFull();
    return 0;
}
