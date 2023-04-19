#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	bool k=false;
	cout<<"追加还是重叠(y/n)";
	char yn;
	string n;
	cin>>yn;
	if(yn=='y') k=true;
	cout<<"格式：类型:数据,..."<<endl;
	cin>>n;
	if(k) {
		fstream f;
		//追加写入
		f.open("Data.ini",ios::out|ios::app);
		//输入你想写入的内容 
		f<<n<<endl;
		f.close();
	} else {
		fstream f;
		//写入
		f.open("Data.ini",ios::out);
		//输入你想写入的内容 
		f<<','<<n<<endl;
		f.close();
	}
	
	return 0;
}

