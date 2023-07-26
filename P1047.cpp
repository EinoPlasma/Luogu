# include <stdio.h>
# include <iostream>
# include <math.h>
int main(){
	int l,m;
	std::cin>>l>>m;
	int trees[l+1]={0};
	for(int i=0;i<m;i++){
		int u,v;
		std::cin>>u>>v;
		for(int j=u;j<=v;j++){
			trees[j]-=1;
		}
	}
	
	int trees_count=0;
	for(int i=0;i<l+1;i++){
		//std::cout<<trees[i]<<std::endl;
		if(trees[i]==0){
			trees_count+=1;
		}
	}
	std::cout<<trees_count;
}