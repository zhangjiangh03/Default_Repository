#include <iostream>
#include <bitset>

using namespace std;

int main() {
	/*
	cout << "hello\n" << endl;

	// cout Ĭ�����ʮ����
	cout << 0b110011 << endl; //ʮ�������
	cout << bitset<8>(0b110011) << endl; //�������������Ҫ����<bitset>
	// bitset<λ��>(��ֵ)��λ��һ��Ϊ8/16/32

	cout << 0123 << endl; //ʮ�������
	cout << oct << 0123 << endl; //�˽������

	cout << 0xab << endl; //ʮ�������
	cout << hex << 0xab << endl; //ʮ���������
	*/
	/*
	int the_data = 0;

	cin >> the_data;
	cout << the_data << endl;
	*/

	int num_s_input, num_f_input;
	cin >> num_s_input >> num_f_input;
	if (num_s_input > num_f_input) {
		cout << "���ֵΪ��" << num_s_input;
	}
	else {
		cout << "���ֵΪ��" << num_f_input;
	}
	return 0;
}

/*
* �����ʹ�� using namespace std;
* ��������Ҫд�� std::cout << "hello" << std::endl
*/