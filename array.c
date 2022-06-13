#include<stdio.h>
int main(){
	int n=1;
	int a[n];
	int b[n];
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the elements of 1st array\n");
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("enter the elements of 2nd array\n");
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
			printf("arrays don't have same elements\n");
			break;	
			}
			if(i==(n-1)&&a[i]==b[i])
			printf("arrays have same elements\n");
		}
}
rdtfgyvfgyhbj
tyrgdfvhb
