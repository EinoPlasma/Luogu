# include <stdio.h>
# include <iostream>
# include <math.h>
int main(){
	int num[100];
	int digit_count=0,cur=0;
	
	int curr;
	std::cin>>curr;
	while(curr!=0){
		num[cur]=curr;
		cur+=1;
		std::cin>>curr;
	}
	digit_count=cur;
	//std::cout<<digit_count<<"\n";

	for(int i=digit_count-1;i>=0;i--){
		std::cout<<num[i]<<" ";
	}
}