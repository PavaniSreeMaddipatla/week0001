#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
long long int factorial=1;
if(n<0){
	printf("Not defined");
}
else{
	int i;
	for(i=1;i<=n;i++){
	factorial*=i;
	}
	printf("%11d\n",factorial);
}
return 0;
}

