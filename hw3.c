#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum DOIVO{
    VO_DO,
    VO_VANG,
    VO_XANH
}VO;

typedef struct box
{
    VO *ptr;
    int size;
} typeBox;  

void *nhapmang(typeBox *value)
{
    char name[7];

    printf("Nhap so luong mang la ");
    scanf("%d", &(value->size));

    value->ptr = (VO*)malloc(value->size * sizeof(VO));

    for (int i = 0; i < value->size; i++)
    {
        lable:
        printf("nhap mang arr[%d] = ", i);
        scanf("%s", name);
        if(strcmp((char*)"VO_DO", name) == 0){
            value->ptr[i] = VO_DO;
        } else if(strcmp((char*)"VO_VANG", name) == 0){
            value->ptr[i] = VO_VANG;
        } else if(strcmp((char*)"VO_XANH", name) == 0){
            value->ptr[i] = VO_XANH;
        } else {
            printf("KHONG THICH HOP\n");
            goto lable;
        }
    }
    
}

int tinhtoan(typeBox value)
{
    int dod = 0;
    int vang = 0;
    int xanh = 0;
    for (int i = 0; i < value.size; i++)
    {
        if (value.ptr[i] == 0)
        {
            dod++;
        } else if (value.ptr[i] == 1)
        {
            vang++;
        } else if (value.ptr[i] == 2)
        {
            xanh++;
        }  
    }
    printf("so doi tat do la %d\n", dod/2);
    printf("so doi tat vang la %d\n", vang/2);
    printf("so doi tat xanh la %d\n", xanh/2);
    printf("Tong doi tat la %d\n", dod/2 + vang/2 + xanh/2);
}

int main(int argc, char const *argv[])
{
    typeBox value;
    nhapmang(&value);
    soluongvo(value);
    
    return 0;
}

