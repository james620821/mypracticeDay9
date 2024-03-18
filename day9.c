#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void countdice(int);
void count2dice(int);
void numbercheck(void);
void check_range_num(void);
void check_maximum_num(void);
int main()
{
    srand(time(0));
    //紇14 14-2 14-3 皚虏ざ
    // int var[3] = {0}; じ戈篈 皚跑计嘿[じ计]
    // var[3] --> var[0] var[1] var[2]
    //countdice(6000);
    //紇14-5 ㄢ聋浑翴计㎝瞷Ω计参璸
    //count2dice(100000);
    //紇15-1 计琩高
    //numbercheck();
    //紇15-2 琩高絛瞅ず计
    //check_range_num();
    //紇15-3 琩高ず程计
    check_maximum_num();

    return 0;
}
void check_maximum_num()
{
    int i,n[10]={0},Q;
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
    }
    while(1)
    {
        printf("Q: ");
        scanf("%d",&Q);
        if(Q==0)
        {
            break;
        }
        int max_i=-1;
        for(i=0; i<10; i++)
        {
            if(n[i]<=Q && (n[i]>n[max_i] || max_i == -1))
            {
                max_i=i;
            }
        }
        if(max_i != -1)
        {
            printf("%d\n",n[max_i]);
        }
    }
}
void check_range_num()
{
    int i,n[10]={0},c[2]={0};
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
    }
    while(1)
    {
        printf("L R:");
        scanf("%d%d",&c[0],&c[1]);
        if(c[0]==0 && c[1]==0)
        {
            break;
        }
        printf("Ans: ");
        for(i=0; i<10; i++)
        {
            if(n[i]>c[0] && n[i]<c[1])
            {
                printf("%d ",n[i]);
            }
        }
        printf("\n");

    }

}
void numbercheck()
{
    int num,i,n[5]={0};
    for(i=1; i<=5; i++)
    {
        printf("%d: ",i);
        scanf("%d",&n[i-1]);
    }
    while(1)
    {
        printf("Q: ");
        scanf("%d",&num);
        if(num == 0)
        {
            break;
        }
        else
        {
            printf("%d\n",n[num-1]);
        }
    }

}
void count2dice(int N)
{
    int i, number[11]={0}, dice[2]={0};
    for(i=1; i<=N; i++)
    {
        dice[0]=rand()%6+1;
        dice[1]=rand()%6+1;
        number[dice[0]+dice[1]-2]++;
    }
    for(i=2; i<=12; i++)
    {
        printf("%d: %d\n",i,number[i-2]);
    }
}

void countdice(int N)
{
    int dice[6]={0}, c, i;
    for(i=1; i<=N; i++)
    {
        c = rand() % 6 + 1;
        //弘虏
        dice[c-1]++;
        /*
        switch(c)
        {
            case 1:
                dice[0]++;break;
            case 2:
                dice[1]++;break;
            case 3:
                dice[2]++;break;
            case 4:
                dice[3]++;break;
            case 5:
                dice[4]++;break;
            case 6:
                dice[5]++;break;
        }
        */
    }
    for(i=0; i<=5; i++)
    {
        printf("%d: %d\n",i+1 ,dice[i]);
    }
}
