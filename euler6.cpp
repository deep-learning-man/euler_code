#include <iostream>
using namespace std;
int main(){
    int sum_1=0, sum_squre=0;
    for(int i=0;i<=100;i++){
    	sum_1+=i;
	sum_squre+=i*i;
    }
    cout<< sum_1*sum_1-sum_squre<< endl;

    return 0;
}
