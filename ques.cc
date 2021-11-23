//C++ Code with Buffer overflow to crash the application 
#include <iostream>
#include<cstring>
using namespace std;
int main(void)
{ 
int arr[10]; 
int arr_num; 
int num,i; //checking address locations
cout<<"\n"; 
cout<<"\n";

cout<<&arr_num;
cout<<"\n";
cout<<&num; 
cout<<"\n";
cout<<&i;
cout<<"\n"; 
cout <<&arr[0];
cout<<"\n";
cout<<&arr[9];
//checked
cout << "Enter the count of numbers? ";
cin >> num;
cout<<"\n"; 
cout<<"Memory address of arr[-2] is \n";
arr[-2]=0;
//memory address of arr[-2] is same as memory address of num variable so even after taking its input value from user we set it to zero by writing zero value at its memory location therefore the loop never runs and program crashes without giving any output 
cout<<&arr[-2]; // Doing buffer memory overflow on the left side of the array and setting its values to zero sets the value of num variable to zero
for (i = 0; i < num; i++)

{ cout << "Enter a number to be stored: ";
cin >> arr_num; 
arr[i]= arr_num; 
}
return 0;
}
