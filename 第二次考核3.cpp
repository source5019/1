#include <stdio.h>
int main(){
	int sum(int a[],int b[],int j,int l);
	int a[]={1,2,3,4,5,6,7};
	int b[]={7,6,5,4,3,2,1};
	int i,j=0;
	int k,l=0;
	for(i=0;a[i]!=0;j++){
		i++;
	}
	for(k=0;b[k]!=0;l++){
		k++;
}
	sum(a,b,j,l);
	for(int c=0;c<=13;c++){
    printf("%d ",a[c]);
	}
	
	
	
}

int sum(int a[],int b[],int j,int l){
	int t;
	for(t=0;t<=j+l;t++){
		a[t+j]=b[t];
	}
	
}
