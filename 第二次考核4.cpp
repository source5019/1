#include <stdio.h>
int main(){
   int nums[]={1,2,3,4,5,6,7,8,9};
   int target=10;
   int sum(int nums[],int target);
   sum(nums,target);
   }
int sum(int nums[],int target){
	for(int i=0;i<9;i++){
   	for(int j=1;j<9;j++){
	if(nums[i]+nums[j]==target){
   			if(i<=j){
			   
   			printf("整数为；%d %d 下标为%d %d\n",nums[i],nums[j],i,j);}
}}
}}
 











