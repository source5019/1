#include <stdio.h>
int main(void){
	int n=9;
	int b=4,c,d;
	int tianjia(int a[],int c,int n);
	int shanchu(int a[],int i,int n);
	int xiugai(int a[],int c,int n);
	int a[]={2568,1,2,3,4,5,6,7,8};
	printf("��һɾ�����۶���ӣ������޸�,��0����"); 
	while(b!=0){
	scanf("%d",&b);
	if(b==1){
		printf("��������ɾ���ĵڼ�����(��0��ʼ)");
		scanf("%d",&c);
		d=n;
		shanchu(a,c,d);
		n--;
	}
	if (b==2){
		printf("�����������ڼ�����ֵ(��0��ʼ)");
		scanf("%d",&c);
		d=n;
		tianjia(a,c,d);
		n++;
		
	}
	if(b==3){
		printf("���������޸ĵĵڼ���������0��ʼ��");
		scanf("%d",&c);
		d=n;
		xiugai(a,c,d); 
	}
}
	
}


int shanchu(int a[],int c,int n){
	int i;
	for(i=c;i<n;i++){
		a[i]=a[i+1];
	}
    for(int b=0;b<n-1;b++){
    	printf("%d ",a[b]);
	}
}


int tianjia(int a[],int c,int n){
	int i,e;
	for(i=n+1;i>=c;i--){
		a[i+1]=a[i];
		}
		printf("������������ֵ");
		scanf("%d",&e);
		a[c]=e;
	for(int b=0;b<n+1;b++){
		printf("%d ",a[b]);
	}
	}
	
int xiugai(int a[],int c,int n){
	int i,b;
	printf("���������޸ĵ�ֵ");
	scanf("%d",&i); 
	a[c]=i;
	for(int b=0;b<n;b++){
		printf("%d ",a[b]);
}}

