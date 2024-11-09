
#include <stdio.h>

int main(void)
{
    int x,y=0;
    int max,min, r;
    scanf("%d %d", &x, &y);
    if(x>y ){
        max=x;
        min=y;
    }
    else if(x<y){
        max=y;
        min=x;
    }
    r=max%min;
    printf("OUTPUT %d\n",r);
}

