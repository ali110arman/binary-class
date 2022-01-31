#include<iostream>
#include<conio.h>
using namespace std;
class binary {
private:
	int binaryresult[21] = { -1 }, int_binary_first, binaryfirst[20] = { -1 }, int_binary_second, binarysecond[20] = { -1 };
public:
	binary();
	void read2();
	void convert_to_binary(unsigned);
	void gam();
	void tafrig();
	void mokamel();
	void shift_to_left();
	void shift_to_right();
};
binary::binary() {
	cin >> int_binary_first;
	for (int i = 0; i < 20; i++)
		binaryresult[i] = (-1);
	for (int i = 0; i < 20; i++)
		binaryfirst[i] = (-1);
	for (int i = 0; int_binary_first != 0; i++) {
		binaryfirst[i] = int_binary_first % 10;
		int_binary_first /= 10;
	}
}
void binary::read2() {
	cin >> int_binary_second;
	for (int i = 0; i < 20; i++)
		binarysecond[i] = (-1);
	for (int i = 0; int_binary_second != 0; i++) {
		binarysecond[i] = int_binary_second % 10;
		int_binary_second /= 10;
	}
}
void binary::convert_to_binary(unsigned decimal) {
	int i = 0;
	if (decimal > 1)
		convert_to_binary(decimal / 2);
	binaryresult[i] = decimal % 2;
	if (binaryresult[i] != (-1))
		cout << binaryresult[i];
	i++;
}
void binary::gam() {
	int sum = 0;
	for (int i = 0; i < 20; i++) {
		bool s = true;
		if (sum == 0)
			if (binaryfirst[i] == -1)
				if (binarysecond[i] == -1)
					break;
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 0)
					if (binarysecond[i] == 0) {
						binaryresult[i] = 1;
						sum = 0;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 0)
					if (binarysecond[i] == 1) {
						binaryresult[i] = 0;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 1)
					if (binarysecond[i] == 0) {
						binaryresult[i] = 0;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 1)
					if (binarysecond[i] == 1) {
						binaryresult[i] = 1;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == -1)
					if (binarysecond[i] == -1) {
						binaryresult[i] = 1;
						sum = 0;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 0)
					if (binarysecond[i] == -1) {
						binaryresult[i] = 1;
						sum = 0;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 1)
					if (binarysecond[i] == -1) {
						binaryresult[i] = 0;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == -1)
					if (binarysecond[i] == 0) {
						binaryresult[i] = 1;
						sum = 0;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == -1)
					if (binarysecond[i] == 1) {
						binaryresult[i] = 0;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 0)
					if (binarysecond[i] == -1) {
						binaryresult[i] = 1;
						sum = 0;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == 1)
					if (binarysecond[i] == -1) {
						binaryresult[i] = 0;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == -1)
					if (binarysecond[i] == 0) {
						binaryresult[i] = 1;
						sum = 0;
						s = false;
					}
		if (s == true)
			if (sum == 1)
				if (binaryfirst[i] == -1)
					if (binarysecond[i] == 1) {
						binaryresult[i] = 0;
						sum = 1;
						s = false;
					}
		if (s == true)
			if (binaryfirst[i] == 0)
				if (binarysecond[i] == 0) {
					binaryresult[i] = 0;
					sum = 0;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == 0)
				if (binarysecond[i] == 1) {
					binaryresult[i] = 1;
					sum = 0;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == 1)
				if (binarysecond[i] == 0) {
					binaryresult[i] = 1;
					sum = 0;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == 1)
				if (binarysecond[i] == 1) {
					binaryresult[i] = 0;
					sum = 1;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == -1)
				if (binarysecond[i] == 1) {
					binaryresult[i] = 1;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == -1)
				if (binarysecond[i] == 0) {
					binaryresult[i] = 0;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == 0)
				if (binarysecond[i] == -1) {
					binaryresult[i] = 0;
					s = false;
				}
		if (s == true)
			if (binaryfirst[i] == 1)
				if (binarysecond[i] == -1) {
					binaryresult[i] = 1;
					s = false;
				}

	}
	for (int i = 7; i >= 0; i--) {
		if (binaryresult[i] != (-1))
			cout << binaryresult[i];
	}
}
void binary::tafrig() {
	mokamel();
	gam();
}
void binary::mokamel() {
	for (int i = 0; i < 8; i++) {
		int sum = binarysecond[i];
		if (sum == -1)
			binarysecond[i] = 0;
	}
	for (int i = 0; i < 8; i++) {
		int sum = binaryfirst[i];
		if (sum == -1)
			binaryfirst[i] = 0;
	}
	bool s = true;
	for (int i = 0; i < 8; i++) {
		int sum = binarysecond[i];
		if (s == false)
			if (sum == 1)
				binarysecond[i] = 0;
		if (s == false)
			if (sum == 0)
				binarysecond[i] = 1;
		if (s == true)
			if (sum == 1)
				s = false;
	}
}
void binary::shift_to_left() {
	for (int i = 19; i >= 0; i--)
		if (binaryfirst[i] != (-1))
			cout << binaryfirst[i];
	cout << 0;
}
void binary::shift_to_right() {
	cout << 0;
	for (int i = 19; i > 0; i--)
		if (binaryfirst[i] != (-1))
			cout << binaryfirst[i];
}
void main() {
	binary a;
	int num;
	//cin >> num;
	//a.convert_to_binary(num);
	a.read2();
	a.tafrig();
	//a.gam();
	//a.shift_to_left();
	//a.shift_to_right();

}