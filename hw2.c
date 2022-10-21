
#include<stdio.h>
#include <stdlib.h>


typedef struct typeArr 
{
    int *ptr;
    int size;
} typeArr;


void nhapmang(typeArr *value)
{
    
    printf("nhap so luong mang la ");
    scanf("%d", &(value->size));

    value->ptr = (int*)malloc(value->size * sizeof(int));

    for (int i = 0; i < value->size; i++)
    {
        printf("nhap arr[%d] = ", i);
        scanf("%d", &(value->ptr[i]));
    }
}

int timmax(typeArr value)
{
    int max = value.ptr[0];
    for (int i = 0; i < value.size; i++)
    {   
        
        if(max < value.ptr[i])
            max = value.ptr[i];
    }
    return max;
}

void mintomax(typeArr value)
{
    int temp;
    for (int i = 0; i < value.size - 1; i++)
    {
        for (int j = i + 1; j < value.size; j++)
        {
            if( value.ptr[i] > value.ptr[j])
            {
                temp = value.ptr[i] ;
                value.ptr[i] = value.ptr[j];
                value.ptr[j] = temp; 
            }
        }
        
    }
    
}

void maxtomin(typeArr value)
{
    int temp;
    for (int i = 0; i < value.size - 1; i++)
    {
        for (int j = i + 1; j < value.size; j++)
        {
            if( value.ptr[i] < value.ptr[j])
            {
                temp = value.ptr[i] ;
                value.ptr[i] = value.ptr[j];
                value.ptr[j] = temp; 
            }
        }
        
    }
    
}

void xuatmang(typeArr value)
{
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d] = %d\n", i, value.ptr[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    
    typeArr value;

    //Nhap mang
    nhapmang(&value);

    //Tim so lon nhat trong mang
    printf("max la %d\n", timmax(value));

    //Sap xep tu be den lon
    printf("Sap xep tu be den lon la \n");
    mintomax(value);
    xuatmang(value);

    //Sap xep tu be den lon
    printf("Sap xep tu lon den be la \n");
    maxtomin(value);
    xuatmang(value);

    return 0;
}