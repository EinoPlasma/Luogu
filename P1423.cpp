# include <stdio.h>
# include <iostream>
# include <math.h>
int main(){
	float s,remain,speed=2.0;
	std::cin>>s;
	int steps=0;
	remain=s;
	while(remain>0){
		remain-=speed*pow(0.98,steps);
		steps+=1;
	}
	std::cout<<steps;
	
	
}