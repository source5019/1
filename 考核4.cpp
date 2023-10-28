#include <stdio.h>

int main()
{    int a=0;
     int b=0;
     int c=0;
     int d=0;
     scanf("%d %d %d",&a,&b,&c);
     if(a>b){
	 
        d=a;
        a=b;
        b=d;
		}
	 if(a>c){
	 	d=a;
	 	a=c;
	 	c=d;
	 }
	 if(b>c){
	 	d=a;
	 	a=b;
	 	b=d;
	 }
	 int e;
	 e=a*100+c*10+d*1;
	 printf("最大数为%d",e);
	 }
