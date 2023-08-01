#include<iostream>
#include<string.h>
using namespace std;
int size ;

void ascending(int size ,int array[]);
void reverse(int array[],int size);
void swap(int *a, int *b);
void insert (int array[] , int &size );
int power(int number , int power);
void prime ();



int main(){

    int option;
    cout<<"please enter your size : ";
    cin>>size;
    int array[size];
    cout<<"please enter your array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"############# Welcome #############"<<endl;
    while (true)
    {
        cout<<"############# Your Options #############"<<endl;
        cout<<"to Ascending enter 1 : "<<endl;
        cout<<"to Reverse array enter 2 : "<<endl;
        cout<<"to Swap two index in array enter 3 : "<<endl;
        cout<<"to Add Element in index enter 4 : "<<endl;
        cout<<"to index of array Power of other enter 5 : "<<endl;
        cout<<"to find prime number enter 6 : "<<endl;
        cout<<"to Exit enter 0 : "<<endl;
        cout<<"Enter : "<<endl;
        cin>>option;

        if(option == 1){
            ascending(size , array);
        }
        else if (option == 2){
            reverse(array,size);
        }
        else if (option == 3){
            int x,y;
            cout<<"enter your index of two numbers : ";
            cin>>x>>y;
            swap(array[x],array[y]);
            for (int i = 0; i < size; i++)
            {
                cout<<array[i]<<" ";
            }cout<<endl;

        }
        else if (option == 4){
            insert (array,size);
        }
        else if (option == 5){
        int powerNumber , x , y ;
        cout<<"enter your index of two numbers : ";
        cin>>x>>y;
        powerNumber = power(array[x],array[y]);
        if(powerNumber == -1 || powerNumber == 0 ){
            cout<<"MathError";
        }else{
            cout<<"("<<array[x]<<")powerOf("<<array[y]<<") = "<<powerNumber<<endl;
        }
        }
        else if (option == 6){
            prime ();
        }
        else if (option == 0){
            cout<<"############ thank you ############  ";
            break;
        }

    }
    return 0 ;
}

void insert (int arr[] , int &size ){
    int num ;
    cout<<"please enter the number of digits you want to add : ";
    cin>>num;
    int x , y ;
    int arr1 [50];
    for(int z = 0 ; z<num ; z++){
        cout<<"Enter the number you want to add and the index where you want to add it : " ;
        cin>>x>>y;
        for(int i = 0 ; i<y ; i++){
            arr1[i]=arr[i];
        }
        arr1[y]=x;
        for(int i = y ; i<size ; i++){
            arr1[i+1]=arr[i];
        }
        size ++ ;
        for(int i = 0 ; i<size ; i++){
            arr[i]=arr1[i];
        }
        cout<<"the new array after "<<z+1<<" add is : " ;
        for(int i = 0 ; i<size ; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl<<endl;
    }
}

void ascending(int size,int array[]){
    int temp;
    for (int i = 0 ; i < size ; i++ )
    {
        for (int j = 0; j < size-1 ; j++ )
        {
            if (array[j] > array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp ;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;

}

void reverse (int array[] , int size)
{
    int *po1 = array;
    int *po2 = array + size - 1;
    while(po1<po2){
        swap(po1,po2);
        po1++;
        po2--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;
}
void prime (){
    int s ;
    cout<<"Enter your number : ";
    cin>>s;
    cout<<"prime number from 1 to "<< s <<" is : ";
    for(int i = 2 ; i<=s ; i++){
        bool isprime = true ;
        for(int j = 2 ; j<=s ; j++){
            if(i%j==0 && i!=j)
                isprime = false ;
        }
        if(isprime==true)
            cout<<i<<' ';
    }
    cout<<endl;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int power(int number , int power){
    int newNumber = 1 ;
    if (power == 0)
    {
        if (number == 0){
                newNumber = -1 ;
        }else{
            newNumber = 1 ;
        }

    }else{
        for (int i = 0 ; i < power; i++)
        {
            newNumber *= number ;
        }
    return newNumber ;
}}
/*
#include <iostream>
using namespace std;
void insert (int arr[] , int &size ){
    int num ;
    cout<<"please inter the number of digits you want to add : ";
    cin>>num;
    int x , y ;
    int arr1 [50];
    for(int z = 0 ; z<num ; z++){
        cout<<"Enter the number you want to add and the index where you want to add it : " ;
        cin>>x>>y;
        for(int i = 0 ; i<y ; i++){
            arr1[i]=arr[i];
        }
        arr1[y]=x;
        for(int i = y ; i<size ; i++){
            arr1[i+1]=arr[i];
        }
        size ++ ;
        for(int i = 0 ; i<size ; i++){
            arr[i]=arr1[i];
        }
        cout<<"the new array after "<<z+1<<"add is : " ;
        for(int i = 0 ; i<size ; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl<<endl;
    }
}


void reverse (int arr[] , int size){
    for(int i = size-1 ; i>=0 ; i--){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}


void ascending (int arr [] , int size){
    for(int i = 0 ; i<size ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void prime (int arr[] , int size){
    int s ;
    cout<<"inter number in this array : ";
    cin>>s;
    cout<<"prime number from 1 to "<< s <<" is : ";
    for(int i = 2 ; i<=s ; i++){
        bool isprime = true ;
        for(int j = 2 ; j<=s ; j++){
            if(i%j==0 && i!=j)
                isprime = false ;
        }
        if(isprime==true)
            cout<<i<<' ';
    }
    cout<<endl;
}


void power (int arr[] , int size){
    int a , b ;
    cout<<"inter 2 number in this array : " ;
    cin>>a>>b;
    long long powe = 1 ;
    for(int i = 0 ; i < b ; i++){
        powe = powe * a ;
    }
    cout<<a << " power " << b << " = " << powe <<endl;
}


int main()
{
    int size ;
    cout<<"please inter size of array : ";
    cin>>size;
    int arr [50];
    cout<<"please inter values of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    char c ;
    cout<<"if you want to insert numbers in any position to this array press i : "<<endl;
    cout<<"if you want to find prime number from 1 to any number in this array press b : "<<endl;
    cout<<"if you want to reverse numbers of this array press r : "<<endl;
    cout<<"if you want to ascending numbers of this array press a : "<<endl;
    cout<<"if you want to make any number power anonter number in this array press p : "<<endl;
    cout<<"if you want to stop operation press 1 : "<<endl;
    cin>>c;
    while(c!='1'){
        if(c=='i')
            insert (arr,size);
        else if(c=='r')
            reverse(arr,size);
        else if (c=='a')
            ascending (arr,size);
        else if (c=='p')
            power (arr,size);
        else if (c=='b')
            prime (arr,size);
        cout<<"choose any operation again :"<<endl;
        cin>>c;
    }
}
*/
