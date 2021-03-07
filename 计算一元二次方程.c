#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF)
    {
        if(a==0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            float delta=b*b-4*a*c;
            if(delta==0)
            {
                printf("x1=x2=%.2f\n",(-b+sqrt(delta))/(2*a));
            }
            else if(delta>0)
            {
                float x=(-b+sqrt(delta))/(2*a);
                float y=(-b-sqrt(delta))/(2*a);
                if(x>y)
                {
                    printf("x1=%.2f;x2=%.2f",y,x);
                }
                else
                    printf("x1=%.2f;x2=%.2f",x,y);
            }
            else
            {
                float x=(-b)/(2*a);
                float y=sqrt(-delta)/(2*a);
                if(y>=0)
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi",
                          x,y,x,y);
                else
                    printf("x1=%.2f+%.2fi;x2=%.2f-%.2fi",
                          x,y,x,y);
                
            }
        }
    }
    return 0;
}

