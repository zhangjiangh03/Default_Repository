#include <iostream>
#include <bitset>

using namespace std;

int main() {
	/*
	cout << "hello\n" << endl;

	// cout 默认输出十进制
	cout << 0b110011 << endl; //十进制输出
	cout << bitset<8>(0b110011) << endl; //二进制输出，需要包含<bitset>
	// bitset<位数>(数值)，位数一般为8/16/32

	cout << 0123 << endl; //十进制输出
	cout << oct << 0123 << endl; //八进制输出

	cout << 0xab << endl; //十进制输出
	cout << hex << 0xab << endl; //十六进制输出
	*/
	/*
	int the_data = 0;

	cin >> the_data;
	cout << the_data << endl;
	*/

	int num_a, num_b;
	cin >> num_a >> num_b;
	if (num_a > num_b) {
		cout << "最大值为：" << num_a;
	}
	else {
		cout << "最大值为：" << num_b;
	}
	return 0;
}

/*
* 如果不使用 using namespace std;
* 代码中需要写成 std::cout << "hello" << std::endl
*/