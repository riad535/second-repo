#include<stdio.h>
int main()
{
    int d ;
    printf("Enter the student number:");
    scanf("%d",&d);

    int j,i, count,marks,t,l,h,total_marks[d];
    printf("Enter lowest number:");
    scanf("%d", &l);

    printf("Enter highest number:");
    scanf("%d",&h);
    for(j = 0; j < d; j++)
    {
        scanf("%d",&total_marks[j]);
    }

    for(marks = l; marks <= h; marks++)
    {
        count = 0;
        for(i = 0; i < d; i++){
            if(total_marks[i] == marks){
                count++;
            }
        }

        printf("marks:%d  count:%d\n",marks, count);

    }
}
