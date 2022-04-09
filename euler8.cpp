#include <iostream>
using namespace std;
char str[1005]; //建议多开一些，因为不差那些内存;该字符串在全局变量区域，默认值会自动初始化为0；
int main(){
	long long ans = 0; //定义答案ans并初始化为0；
	long long now = 1;//定义当前窗口中的乘积，初始化值为1；
	long long zero_cnt = 0; //定义一个0的个数计数器；
	cin >> str; //先把那个大长字符串输入进来；
	for(int i=0;str[i];i++){ //注意：str[i]表示，字符串最后一位为\0，表示字符串结束，它对应的ACII码值就是字符0；
		if (i<13){ //因为我们观察字符串，发现前13个数字中没有0；
			now*=str[i]-'0'; // 减去‘0’，是由于字符串的最后一个字符是‘0’；
		}else if(str[i] != '0'){
			now*=str[i]-'0';    //乘以当前的数字
		}else{ //否则，就一定是个0；
			zero_cnt++;
		
		}
		if (i>=13){
			if(str[i-13] != '0'){
				now/=str[i-13]-'0'; //如果字符不是0，直接除即可；
			}else{
				zero_cnt--;
			}
		}
		if(zero_cnt==0){
			ans = max(ans, now);
		}
	}
	cout<< ans <<endl;
	return 0;
}

