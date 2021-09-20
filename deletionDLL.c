//program of deletion element in doubly linked list
#include<stdio.h>
#include<conio.h>
int main()
{
     int info[8]={45,43,10,50,90};
    int frw[8]={2,4,-1,1,0,6,-1,5};
    int rev[8]={8,3,0,-1,1};
    int start=3;
    int rloc,loc,save,floc,ptr,item,new;
    int avail=7;
    ptr=start;
    printf("\ntraversing is\n");
    while (ptr!=-1)
    {
        printf("%d\t",info[ptr]);
        ptr=frw[ptr];
    }

    printf("\nenter the element you want to delete");
    scanf("%d",&item);

        if (info[start]==item)
        {
            loc=start;
            start=frw[start];
            frw[loc]=avail;
            avail=loc;

        }
        else
        {
            save=start;
            ptr=frw[start];
            while (ptr!=-1)
            {
                if (info[ptr]==item)
                {
                   loc=ptr;
                   rloc=rev[loc];
                   frw[rloc]=frw[loc];
                   floc=frw[loc];
                   rev[floc]=rloc;

                   frw[loc]=avail;
                   avail=loc;
                   break;

                }
                else
                {
                    save=ptr;
                    ptr=frw[ptr];
                }
            }
        }
    

    ptr=start;
    printf("\ntraversing after insertion is\n");
    while (ptr!=-1)
    {
        printf("%d\t",info[ptr]);
        ptr=frw[ptr];
    }
    
    return(0);

}