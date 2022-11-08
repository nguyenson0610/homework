#include<stdio.h>

int strlen(char *string)
{
    char *s = string;
    while (*s != '\0')
    {
        s++;
    }
    return s-string;
}

typedef struct chuoi
{
    char *ptr;
} typeChuoi;


void nhapchuoimela(typeChuoi *value1)
{
    printf("Nhap chuoi me la ");
    gets(value1->ptr);
}

void nhapchuoiconla(typeChuoi *value2)
{
    printf("Nhap chuoi con la ");
    gets(value2->ptr);
}



int main(int argc, char const *argv[])
{
    typeChuoi value1;
    typeChuoi value2;
    int count = 0;
    int i = 0, j = 0;
    nhapchuoimela(&value1);
    printf("xuat chuoi me la %s\n", value1);    
    nhapchuoimela(&value2);
    printf("xuat chuoi con la %s\n", value2);

    while (value1.ptr[i] != '\0')
    {
        if(value1.ptr[i] == value2.ptr[j])
        {
            while (value1.ptr[i] == value2.ptr[j] && value1.ptr[i] != '\0')
            {
                i++;
                j++;
            }
            if (j == strlen(value2.ptr) &&  value1.ptr[i] != '\0')
            {
                count++;
            }
            
        } else 
        {
            while (value1.ptr[i] != '\0')
            {
                i++;
                if (value1.ptr[i] =='\0')
                {
                    break;
                }
            }
        }
        i++;
        j = 0;
    }
    printf("so lan xuat hien la %d\n", count);
    
}