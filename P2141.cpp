# include <stdio.h>
# include <iostream>
# include <math.h>
// 暴力法 O(n^3)
int main(){
	int num[100];
	int num_count=0;
	std::cin>>num_count;
	
	for(int i=0;i<num_count;i++){
		std::cin>>num[i];
	}
	
	int count_ret=0;
	for(int k=0;k<num_count;k++){
		int find=0;
		for(int i=0;i<num_count;i++){
			for(int j=i+1;j<num_count;j++){
				int sum=num[i]+num[j];
					if(sum==num[k] && i!=j && i!=k && j!=k){
						//std::cout<<i+1<<" "<<j+1<<"\n";
						find+=1;
					}
			}
		}
		if(find>0){
			count_ret+=1;
		}
	}
	std::cout<<count_ret;
}