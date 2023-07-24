# include <stdio.h>
# include <iostream>

int main(){
	long long x;
	int n,remainder,times;
	std::cin>>n>>x;
	
	for(int i=1; i<=n ;i++){
		int num=i;
		//std::cout<<num;
		while(num!=0){
			remainder = num%10;
			num = num / 10;
			if(remainder==x){
				times+=1;
			}
		}
	}
	std::cout<<times;
	
}