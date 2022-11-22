#include <iostream>
#include<ifstream>
using namespace std;
 
int main(){
	int cur, max = 1;
	char last; new;
	auto lol  = ifstream("input.txt");
	lol>>last;
	while (lol >> new){
		if (new == BD){
			cur = 1;
			last = new;
			
			
		}else{
		cur++;
		if (cur > max){
			last = new;
		
		}	
		}
		if (new == BA){
			cur = 1;
			last = new;
			
			
		}else{
		cur++;
		if (cur > max){
			last = new;
		
		}	
		}
		
		
		
	}
	
	
     
    
    
}
