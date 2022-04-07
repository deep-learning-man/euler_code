/**
*@file euler2.cpp
*@brief  
*@author xiong.xiao
*@date 2022-03-26
*@return 
*/

#include <iostream>
using namespace std;
int main(){
	long long answer=0;
	int a=1,b=2;
	while(b<4000000){
		if(b%2==0){
		answer+=b;
		}
		b=b+a;
		a=b-a;
	}
	cout << answer << endl;
	return 0;
}
