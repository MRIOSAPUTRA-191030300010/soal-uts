#include<iostream>
using namespace std;
int main ()
{
	char mengulang;
	do {
		
	int cepat;
	cout<<"masukkan kecepatan mobil: ";
	cin>>cepat;
	
	if (cepat <60)
	{
		cout<<cepat<< " anda berada di zona aman"<<endl;
	}
	else if(cepat<100)
	{
		cout<<cepat<< " anda berada di batas maksimum kecepatan"<<endl;
	}
	else if(cepat<150)
	{
		cout<<cepat<< " anda berada di zona bahaya"<<endl;
		
	}
	else if(cepat>150)
	{
		cout<<"batas inputan hanya sampai 150"<<endl;
	}
		cout<<endl;
		cout<<"apakah ingin menjalankan program lagi pilihanya (y/n)?"<<endl;
		
		cin>>mengulang;

	}while (mengulang=='y');
	system("pause");
	return 0;	
}
