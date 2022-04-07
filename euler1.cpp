/**
*@file euler1.cpp
*@brief  
*@author xiong.xiao
*@date 2022-03-25
*@return 
*/

#include <iostream>
using namespace std;
int main(){
	int answer=0;
	for (int i=1;i<1000;i++){
		if (i%3==0 || i%5==0){
		answer+=i;
		}
	}
	cout << answer << endl;
	return 0;

}

