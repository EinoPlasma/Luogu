# include <stdio.h>
# include <iostream>

int main(){
	int k;
	std::cin>>k;
	int salaries[11000]={0};
	int cur=0;
	for(int i=0;i<=142;i++){
		for(int j=0;j<i;j++){
			salaries[cur]=i;
			cur++;
		}
	}
	
	long long salary_sum=0;
	for(int i=0;i<k;i++){
		salary_sum+=salaries[i];
	}
	std::cout<<salary_sum;
	
}