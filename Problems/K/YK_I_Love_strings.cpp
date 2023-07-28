// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
	cin>>n;
	while(n--){
		string value1,value2;
		cin>>value1>>value2; 
		int size = value1.size() + value2.size();
		int flag1 = 1,flag2 = 1;
		for(int i=0;i<size;i++){
			if(value1.size()>i){
				cout<<value1[i];
			}
			if(value2.size()>i){
				cout<<value2[i];
			}	
		}
		cout<<endl;
	}
}
