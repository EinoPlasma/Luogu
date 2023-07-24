# include <stdio.h>
# include <iostream>

int main(){
	int a,d=1;
	std::cin>>a;
	while(a>1){
		a=a/2;
		d+=1;
	}
	std::cout<<d;
	
}