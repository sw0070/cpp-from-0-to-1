#include <iostream>
using namespace std;
int main(){
	//1.标识符不能时关键字
	// int int = 10; 报错

	//2.标识符由字母，数字，下划线组成
	int abc = 10;
	int _abc = 120;
	int _123abc = 30;

	//3.标识符第一个只能是字母，下划线
	//int 123abc = 40; 报错

	//4.标识符区分大小写
	int aa = 100;
	//cout << AAA << endl;报错

	system("pause");
	return 0;
}