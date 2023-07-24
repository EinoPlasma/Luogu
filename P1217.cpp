# include <stdio.h>
# include <iostream>
# include <math.h>
int is_prime(int n){
	for(int i=2; i<=sqrt(n)+1; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
	int a,b;
	std::cin>>a>>b;
	
	int PPs[111100]={0};
	int d1,d2,d3,d4,d5,palindrome,cur=0;
	for (d1 = 1; d1 <= 9; d1+=2) {
           		palindrome = d1;
           		PPs[cur]=palindrome;
           		cur+=1;
           		//std::cout<<cur<<palindrome;
 	}
	for (d1 = 1; d1 <= 9; d1+=2) {
           		palindrome = d1*10+d1;
           		PPs[cur]=palindrome;
           		cur+=1;
           		//std::cout<<cur<<palindrome;
 	}
	for (d1 = 1; d1 <= 9; d1+=2) {
     for (d2 = 0; d2 <= 9; d2++) {
           		palindrome = 100*d1 + 10*d2 +d1;
           		PPs[cur]=palindrome;
           		cur+=1;
           		//std::cout<<cur<<palindrome;
     }
 	}
	for (d1 = 1; d1 <= 9; d1+=2) {
     for (d2 = 0; d2 <= 9; d2++) {
         for (d3 = 0; d3 <= 9; d3++) {
           		palindrome = 10000*d1 + 1000*d2 +100*d3 + 10*d2 +d1;
           		PPs[cur]=palindrome;
           		cur+=1;
           		//std::cout<<cur<<palindrome;
         }
     }
 	}
	for (d1 = 1; d1 <= 9; d1+=2) {
     for (d2 = 0; d2 <= 9; d2++) {
         for (d3 = 0; d3 <= 9; d3++) {
           for(d4 = 0; d4 <= 9; d4++){
           		palindrome = 1000000*d1 + 100000*d2 +10000*d3 + 1000*d4  + 100*d3 + 10*d2 +d1;
           		PPs[cur]=palindrome;
           		cur+=1;
           		//std::cout<<cur<<palindrome;
           }
         }
     }
 	}
 	for (d1 = 1; d1 <= 9; d1+=2) {
     for (d2 = 0; d2 <= 9; d2++) {
         for (d3 = 0; d3 <= 9; d3++) {
           for(d4 = 0; d4 <= 9; d4++){
           	for(d5=0; d5<=9; d5++){
           		palindrome = 100000000*d1 + 10000000*d2 +1000000*d3 + 100000*d4 +10000*d5 + 1000*d4 + 100*d3 + 10*d2 +d1;
           		PPs[cur]=palindrome;
           		cur+=1;
           		//std::cout<<cur<<palindrome;
           	}
           }
         }
     }
 	}
	
	for(int i=0;i<55550;i++){
		int PP = PPs[i];
		//std::cout<<PP<<"\n";
		if(PP>=a & PP<=b){
			if(is_prime(PP)){
				std::cout<<PP<<"\n";
			}
		}
	}
	
}