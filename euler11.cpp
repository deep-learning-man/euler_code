#include <iostream>
using namespace std;// 实际上就是告诉编译器，你类型是什么，在哪能找到。常用的是using namespace std,就是说用C＋＋的标准名字空间。你也可以引用你自己的名字空间
int num[30][30],ans; //开一个30*30的数组；ans表示最终的答案
//定义方向数组，x和y方向，原点为（0，0）,上下左右斜对角共8个方向，由于遍历整个数组，会存在重复，因此取其中的4个即可
int dirtx[4]={-1,0,1,1};
int dirty[4]={1,1,1,0};
int main(){
	for(int i = 5; i<25;i++){ //从（5.5）点开始读取
		for(int j=5;j<25;j++){
		cin >> num[i][j];
		}
	
	}

	for(int i=5;i<25;i++){
		for(int j=5;j<25;j++){
			for(int k=0;k<4;k++){
				int t=num[i][j];
				for(int l=1;l<=3;l++){
					int x=i+l*dirtx[k];
					int y=j+l*dirty[k];
					k*=num[x][y];
				}
				ans =max(ans,t);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
