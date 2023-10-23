#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b){
	if(b!=0){
		return a/b;
	return false;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	tong(1,2);
	hieu(5,3);
	tich(2,3);
	thuong(10.0,5.0);
	system("pause");
	return 0;
}