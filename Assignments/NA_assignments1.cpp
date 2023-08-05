Problem A
#include <iostream>
#include<cmath>
using namespace std;
int main (){
int cases,base , power ;
cin >> cases;
while (cases--){
    cin >> base >> power;
     cout << pow(base,power)<< endl;
}
    return 0;
}

Problem B
#include <iostream>
using namespace std;
int reverse(int num){
  int reversed=0;
  while (num>0){
    int digit = num %10;
    reversed= reversed*10 +digit;
    num/=10;
  }
  return reversed;
}
int main (){
int cases,number ;
cin >> cases;
while (cases--){
   cin >> number;
   cout << reverse(number)<<endl;
}
    return 0;
}

Problem C
#include <iostream>
using namespace std;
int main (){
int a,b ;
cin >> a>> b;
int arra[]= {1,2,3,4,5};
int arra2[6];
  for (int i = 0; i < b; i++) {
        arra2[i] = arra[i];
    }
arra2[b]= a;

for (int i = b; i < 5; i++) {
        arra2[i+1] = arra[i];
    }

 for (int i=0;i<5;i++){
    cout <<  arra[i]<< " ";
 }
 cout << endl;
  for (int i=0;i<6;i++){
    cout <<  arra2[i]<< " ";
 }
    return 0;
}

Problem D		
#include<iostream>
using namespace std;
int main (){
    int size;
    cin >> size;
    int array[size]; 
    for (int i =0;i<size;i++){
        cin >> array[i];
    }
  int atr= size -1;
  
    for(int j=0;j<=atr;j++){
            for(int i=0;i<=atr-j;i++){
    
                    if(array[i]>array[i+1]){
                        int tmp = array[i+1];
                        array[i+1]= array[i];
                        array[i]=tmp;
                        
        }
    }

    }
    for (int i =0;i<size;i++){
        cout << array[i]<< " ";
    }   
     return 0;
}

Problem E
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
string input_string,words;
cin >> input_string;
stringstream mystream (input_string);//create obj named mystream and initialize it with input_string value;
int counter(1);
while(mystream>>words){ //extract word by word from mystream into words
   counter++;
}
 cout << counter <<endl;
    return 0;
}

Problem f	
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
    string words;
while (cin >> words) {
        for (char& ch :words){
            ch = toupper(ch);
        }
        cout << words <<" ";
    }
    return 0;
}


Problem G
#include <iostream>
#include <string>
#include <cctype> // Include cctype for isalpha function
using namespace std;

int main() {
    string words, output_words;
    getline(cin, words);
    
    for (char c : words) {
        if (isalpha(c) || c == ' ') {
            output_words += c;
        }
    }
    
    cout << output_words << endl;
    
    return 0;
}


Problem H
#include<iostream>
using namespace std;

int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    int cases;
    int number;
    cin >> cases;
    
    while (cases--) {
        cin >> number;
        cout << factorial(number) << endl;
    }
    
    return 0;
}

Problem I 
#include <iostream>
using namespace std;

int fibonacci(int x) {
    if (x <= 1)
        return x;
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << fibonacci(x) << endl;
    }

    return 0;
}

Problem J
    #include<iostream>
    #include <string>
    #include <algorithm>
    using namespace std;
    void swap (int* x , int* y){
    int temp = *y ;
    *y =*x;
    *x =temp;
    }
    int main (){
int x, y;
cin >> x>> y;
swap(&x,&y);
cout << x<< " " << y;

        return 0;
    }


Problem k 
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

  
    int* ptr = &A[N-1];//point to the last element 

    while (ptr >= A) {
        cout << *ptr << " ";
        ptr--;
    }

    cout << endl;

    return 0;
}

Problem L
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
int main() {
 int number ;
 cin >> number;
 for (int i =0;i<number;i++)
 if (isPrime(i)){
    cout << i<<" ";
 }
    return 0;
}


