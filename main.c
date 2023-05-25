
#include <stdio.h>
int main(){
    int ary[10];
    int i, total, high;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &ary[i]);
    }
    high =ary[0];
    for(i-1;1<10;i++)
    {
        if(ary[i] >high)
            high=ary[i];
    }
    printf("%d",high);
    return 0;
}
