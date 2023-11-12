#include <stdio.h>

int main(void)
{   int a=0;
    int b,e,f;
    int i;
    int qwe(int c[],int e,int f);
    int c[]={2568,1,9,2,8,3,7,4,6,5};
    for(a=0;a<10;a++){
    	for(b=a+1;b<10;b++){
   	        qwe(c,a,b);
			}
		}
	for(a=0;a<10;a++){
	printf("%d ",c[a]);
	}
}

int qwe(int c[],int e,int f){
	if(c[e]<=c[f]){
		
	}
	if(c[e]>c[f]){
		int t;
		t=c[e];
		c[e]=c[f];
		c[f]=t;
	}
}
