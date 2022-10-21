#include<stdio.h>

int ktradieukien(int ngay, int thang, int nam)
{
    if(ngay < 1 || ngay > 31)
    {
        printf("ERROR, khong co ngay %d", ngay);
        return 0;
    }else if(thang < 1 || thang > 12)
    {
        printf("ERROR, khong co thang %d", thang);
        return 0;
    }else if(nam > 2023)
    {
        printf("ERROR, chua co nam %d", nam);
        return 0;
    }else if(thang == 2)
    {
        if(ngay == 30 || ngay == 31)
        {
            printf("thang 2 khong co %d ngay\n", ngay);
            return 0;
        }
    }
}

int InTuoi(int ngay, int thang, int nam, int a, int b, int c)
{
    int tuoi;
    tuoi = c - nam;
    if(thang > b)
    {
        return tuoi;
    } else if( thang < b)
    {
        return tuoi--;
    } else if (thang == b)
    {
        if(ngay >= a )
            return tuoi;
        else 
            return tuoi--;
    }

}

int main(int argc, char const *argv[])
{
    int ngay, thang, nam;
    int a , b, c;
    do
    {
        printf("Nhap ngay hien tai la ");
        scanf("%d", &a);
        printf("Nhap thang hien tai la ");
        scanf("%d", &b);
        printf("Nhap nam hien tai la ");
        scanf("%d", &c);        
    } while (ktradieukien(a, b, c) == 0);
    
    do
    {
        printf("Nhap ngay sinh la ");
        scanf("%d", &ngay);
        printf("Nhap thang sinh la ");
        scanf("%d", &thang);
        printf("Nhap nam sinh la ");
        scanf("%d", &nam);
    } while (ktradieukien(ngay, thang, nam) == 0);

    printf("Ngay %d, Thang %d, Nam %d\n", ngay, thang, nam);
    printf("Hien tai la Ngay %d, Thang %d, Nam %d\n", a, b, c);
    printf("Tuoi hien tai la %d", InTuoi(ngay, thang, nam, a, b, c));
}