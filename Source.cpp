#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
<<<<<<< HEAD
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
=======

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
	tong(5,6);
	hieu(5,3);
	tich(3,5);
	thuong(10.0,5.0);
>>>>>>> 06d9becbb8d8520c1cc5f8eee0bee44fc2cbc357
	system("pause");
	return 0;
}