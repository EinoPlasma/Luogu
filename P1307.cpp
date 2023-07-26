# include <stdio.h>
# include <iostream>
# include <math.h>
# include <string>

#define MAXLEN 100
struct HP{
	int num[MAXLEN]; // reversed in default
	int digits;
};
int reverse(int x){
	int tmp=x;
	int remainder=0;
	int cur=0;
	struct HP hp_x,hp_ret;
	// convert x to HP
	if(tmp!=0){
		while(tmp>0){
			remainder = tmp % 10;
			tmp /= 10;
			hp_x.num[cur]=remainder;
			hp_x.digits=cur+1;
			cur++;
		}
	}else{
		hp_x.num[0]=0;
		hp_x.digits=1;
	}

	// reverse hp_x then store it in hp_ret
	for(int i=0; i<hp_x.digits; i++){
		//std::cout<<hp_x.num[i]<<std::endl;
		hp_ret.num[i]=hp_x.num[hp_x.digits-i-1];
	}
	hp_ret.digits=hp_x.digits;
	
	// return ret
	int ret=0;
	for(int i=0; i<hp_ret.digits; i++){
		ret+=hp_ret.num[i]*pow(10,i);
	}
	
	return ret;
}
int main(){
	int n,ret;
	std::cin>>n;
	if(n<0){
		ret=-1*reverse(n*-1);
	}else{
		ret=reverse(n);
	}
	std::cout<<ret;
	
	
}