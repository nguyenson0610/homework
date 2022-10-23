#include <stdio.h>
#include <stdlib.h>

typedef struct typeArr
{
    int *ptr;
    int size;
} typeArr;

typedef struct even
{
    int *evenptr;
    int evensize;
} typeEven;

typedef struct odd
{
    int *oddptr;
    int oddsize;
} typeOdd;

void nhapmang(typeArr *value)
{
    printf("nhap so luong mang la ");
    scanf("%d", &(value->size));

    value->ptr = (int *)malloc(value->size * sizeof(int));

    for (int i = 0; i < value->size; i++)
    {
    label:
        printf("nhap arr[%d] = ", i);
        scanf("%d", &(value->ptr[i]));
        if (value->ptr[i] > 9 || value->ptr[i] < 1)
        {
            printf("NHAP SAO !!!\n");
            goto label;
        }
    }
}

void mangeven(typeArr value)
{
    typeEven even;
    int h = 0;
    int count1 = 0;
    for (int i = 0; i < value.size; i++)
    {
        if (value.ptr[i] % 2 == 0)
        {
            count1++;
        }
    }
    printf("In ra mang even la\n");
    even.evenptr = malloc(count1 * sizeof(int));
    for (int i = 0; i < value.size; i++)
    {
        if (value.ptr[i] % 2 == 0)
        {
            while (h < count1)
            {
                even.evenptr[h] = value.ptr[i];
                printf("arreven[%d] = %d\n", h, even.evenptr[h]);
                h++;
                break;
            }
        }
    }
}

void mangodd(typeArr value)
{
    typeOdd odd;
    int h = 0;
    int count1 = 0;
    for (int i = 0; i < value.size; i++)
    {
        if (value.ptr[i] % 2 != 0)
        {
            count1++;
        }
    }
    odd.oddptr = malloc(count1 * sizeof(int));
    printf("In ra mang odd la\n");
    for (int i = 0; i < value.size; i++)
    {
        if (value.ptr[i] % 2 != 0)
        {
            while (h < count1)
            {
                odd.oddptr[h] = value.ptr[i];
                printf("arrodd[%d] = %d\n", h, odd.oddptr[h]);
                h++;
                break;
            }
        }
    }
}

void xuatmang(typeArr value)
{
    printf("xuat mang la \n");
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d] = %d\n", i, value.ptr[i]);
    }
}

int main(int argc, char const *argv[])
{
    typeArr value;
    nhapmang(&value);
    xuatmang(value);
    mangeven(value);
    mangodd(value);
}
