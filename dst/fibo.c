#include<stdio.h>

void  fibo(int n){
    int a = 1;
    int b = 1;
    if(n==1){
    	printf("1");
    }else if (n==2){
    	printf("1 1 ");
    }
    else{
	printf("1 1 ");
   	n-=2;
	while(n--){
		int t = b;
		b = a+b;
		a = t;
		printf("%d ",b);
	}
    }
}

int main(){
    int var;
    scanf("%d", &var);
    
    fibo(var);

    return 0;
}
