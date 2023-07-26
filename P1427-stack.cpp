# include <stdio.h>
# include <iostream>
# include <math.h>
int main(){
	int num[101];
	int top,a;
	while(1){
		std::cin>>a;
		if(a==0) break;
		top++;
		num[top]=a;
		
	}
	while(top>0){
		std::cout<<num[top]<<" ";
		top--;
	}
}