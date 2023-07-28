// Yasmin Kamal
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int arr[26] = {0};
	int size;
	cin>>size;
	for(int i=0;i<size;i++){ // i = 1
	    char c;
	    cin>>c;
		arr[(int)c - 97]++;
	}
	for(int i= 0;i<=25;i++){ // 0 1
		while(arr[i] != 0){
			cout<<(char)(i+97);//97
			arr[i]--;
		}
	}
}
