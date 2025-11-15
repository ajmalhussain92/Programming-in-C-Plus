#include<stdio.h>

void prt(int k, char str[]){
	for(int i=1; i<=k; i++){
	
	printf("%s\n",str);
   }
}
//take name,amount as user input & print multiple times
int main(){
	char name[20];
	int n;
	
	printf("name: ");
	scanf("%[^\n]s",name);
	
	printf("amount: ");
	scanf("%d",&n);
	
	prt(n,name);
	
	return 0;
}