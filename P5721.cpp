# include <stdio.h>
# include <iostream>

int main(){
	int n;
	std::cin>>n;
	int cur=0;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cur+=1;
			if(cur<10){
				std::cout<<"0"<<cur;
			}else{
				std::cout<<cur;
			}
		}
		std::cout<<"\n";
	}
	
}