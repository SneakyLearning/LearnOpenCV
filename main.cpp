#if 0
//简单计算器
#include <iostream>
using namespace std;
int main() {
	while (true)
{
	cout << "caculate" << endl;
	double a, b;
	char sign;
	cin >> a >> sign >> b;
	if (sign == '+')
		cout << (a + b) << endl;
	if (sign == '-')
		cout << (a - b) << endl;
	if (sign == '*')
		cout << (a * b) << endl;
	if (sign == '/')
		cout << (a / b) << endl;

	}
	
}
#endif

#if 0
//引用形参
#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
	
}
int main() {
	int x = 0;
	int y = 1;
	swap(x, y);
	cout << x << endl << y;
}
#endif

#if 0
#include<iostream>
using namespace std;
template<typename T>
T add(T x, T y) {
	cout<<(x+y)<<endl;
	return 0;
}
int main() {
	int x = 1;
	int y = 2;
	add<int>(x, y);
	
}
#endif

#if 0
#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	string a = {"hello"};
	cout << a.size() << endl;
	cout << a.substr(1, 3) << endl;
	cout << a.find('e') << endl;
	vector<int> b = { 1,2,3 };
	int c = b[0];
	cout << c << endl;
}
#endif

#if 0
//动态内存分配，new，delete	
#include<iostream>
#include
using namespace std;
int main() {

}
#endif

#if 0
#include<iostream>
#include<string>
//struct是public的，classs默认private
using namespace std;
class student {
public:
	string name;
	double score;
	void print() {cout << name << "\t" << score << endl;};

};
//friend友元函数
//重定义运算符
ostream& operator<<(ostream &o,student s){ 
	cout << s.name;
	return o; 
}
istream& operator>>(istream &in, student &s) {
	cin >> s.name;
	return in;
}

int main() {
	student stu;
	stu.name = "Wang";
	stu.score = 100;
	cin >> stu;
	cout << stu;
}

#endif

#if 0//my string
//构造函数申请内存，析构函数释放内存,生成次序相反
#include<iostream>
using namespace std;

class String() {
	char *data;
	int n;
public:
	String(char* s) {
		if (s == 0) {
			data = 0; n = 0; return;
		};
		const char *p = s;
		while (*p)
			p++;
		n = p - s;
		data = new char[n + 1];
		for (int i = 0; i < n; i++)
			data[i] = s[i];
		data[n]="\0"
	}
};
int main() {
	String str,str2("hello")
}
#endif

#if 1//My Vector
#include<iostream>
class Vector {
	int* data;
	int capacity;
	int n;
public:
	Vector
	void push_back(int e) {

	};
	int opeator[](int i) const{
		return data[i];
	};
	

};
#endif