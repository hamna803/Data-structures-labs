
#include<iostream>
#include<queue>
using namespace std;

class DATA{
	
	public:
		int H;
		int S;
		int L;
};

class Customer{
	
	public:
        int Cust_H;
		int Entery_T;
};
void Customer_Validity(int T_R, int Mem, int vist){
	
	DATA o[Mem];
	
	for(int i=0;i<Mem;i++){
		cin>>o[i].H;
		cin>>o[i].S;
		cin>>o[i].L;
     }
     
     Customer b[vist];
		int a = 0;
		
		for(int i=0;i<vist;i++){
		cin>>b[i].Cust_H;	
		cin>>b[i].Entery_T;

		for(int j=0;j<Mem;j++){
		if(o[j].S <= b[i].Entery_T && b[i].Entery_T<=o[j].L){
			if(b[i].Cust_H<=o[j].H){
				cout<<"NO"<<endl;
				a = 1;
				break;
			}
        }
    }
		if(a == 0){
			cout<<"YES"<<endl;
			}
			
		else{
			a = 0;
       }
    }
}
int main(){
	
	int T_R, Mem, vist;
	
	cout<<"--- CHECK CUSTOMER VALIDITY ---"<<endl;
	cin>>T_R;
	cin>>Mem;
	cin>>vist;

	Customer_Validity(T_R, Mem, vist);
	return 0;
}
