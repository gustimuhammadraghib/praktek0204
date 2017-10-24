#include <iostream>
using namespace std;

int main(){
	
	int LR=42;
	cout<<"Luas Rumah			: "<<LR<<" m2"<<endl;
	double LP=1.87596;
	cout<<"Luas 1 box parket	: "<<LP<<" m2"<<endl;
	double JBP=LR/LP;
	cout<<"Jumlah box parket	: "<<JBP<<endl;
	double BPT=JBP*500;
	cout<<"Biaya parket (Rp)	: "<<BPT<<endl;
	int BP=LR*20;
	cout<<"Biaya pasang (Rp)	: "<<BP<<endl;
	double TB=BPT+BP;
	
	
}
