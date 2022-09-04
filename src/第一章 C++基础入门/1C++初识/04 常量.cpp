#include <iostream>
using namespace std;

// 1.宏常量
#define NUM 7

int main(){
	// NUM = 12修改报错
	cout << "一周有" << NUM << "天" << endl;

	// const修饰的变量
	const int month = 12;
	// month = 24修改报错

	cout << "一年有" << month << "个月" << endl;
	system("pause");
	return 0;
}
