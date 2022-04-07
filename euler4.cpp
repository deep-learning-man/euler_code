/**
*@file euler4.cpp
*@brief  
*@author xiong.xiao
*@date 2022-04-01
*@return 
*/

#include <iostream>
using namespace std;

int func(int x){
	int raw=x;
	int t=0; 
	while(x){
		t=t*10+x%10;
		x/=10;
	}
	return t==raw;
}
int main(){
	int answer=0;
	for(int i=100;i<1000;i++){
		for(int j=i;j<1000;j++){
			if (func(i*j)){
				answer=max(answer,(i*j));
			}
		}	
	}

	cout<< answer <<endl;
	return 0;

}
