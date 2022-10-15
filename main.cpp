#include<iostream>
using namespace std;

int main()
{
	int p, K;
	double lf=0.05;
	cout<<"MOJE DA VZEMETE SUMA OT 500 DO 1000 LV"<<endl;
	cout<<"VYDETE SUMATA KOQTO ISKATE"<<endl;
	cin>>K;
	cout<<"VYVEDETE PERIODA ZA KOQTO ISKATE DA PALTITE OT 2 DO 6 MESECA"<<endl;
	cin>>p;
	switch (p)
	
	{
		case 2:
			cout<<(K*0.05)<<endl;
			cout<<"OBSHTATA  SUMA E "<<(K+K*0.05)<<endl;
			cout<<"MESECHNATA VNOSKA "<<(K+K*0.05)/2<<endl;
			cout<<"LIHVATA ZA KREDITA E "<<p;
			break;
		case 3:
			cout<<(K*0.06)<<endl;
			cout<<"OBSHTATA  SUMA E "<<(K+K*0.06)<<endl;
			cout<<"MESECHNATA VNOSKA "<<(K+K*0.06)/3<<endl;
			cout<<"LIHVATA ZA KREDITA E "<<p;
			break;
		case 4: 
		cout<<(K*0.07)<<endl;
		cout<<"OBSHTATA  SUMA E "<<(K+K*0.07)<<endl;
		cout<<"MESECHNATA VNOSKA "<<(K+K*0.07)/4<<endl;
		cout<<"LIHVATA ZA KREDITA E "<<p;
		break;
		case 5:
			cout<<(K*0.08)<<endl;
			cout<<"OBSHTATA  SUMA E "<<(K+K*0.08)<<endl;
			cout<<"MESECHNATA VNOSKA "<<(K+K*0.08)/5<<endl;
			cout<<"LIHVATA ZA KREDITA E "<<p;
			break;
		case 6:
			cout<<(K*0.09)<<endl;
			cout<<"OBSHTATA  SUMA E "<<(K+K*0.09)<<endl;
			cout<<"MESECHNATA VNOSKA "<<(K+K*0.09)/6<<endl;
			cout<<"LIHVATA ZA KREDITA E "<<p;
			
	}
		
	 
	

	
}
