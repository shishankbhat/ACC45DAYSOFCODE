#include<iostream>
using namespace std;
int main()
{
    int n,count = 0, flag = 0, key;
    cout<<"ENter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i = 0; i < n ; i++)
    {
      cin>>arr[i];
    }
    cout<<"This is your inserted elements"<<endl;
    for(int j = 0; j < n ; j++)
    {
       cout<<arr[j];
    }
    cout<<"Enter the elements to search "<<endl;
    cin>>key;
    for(int i  = 0; i < n ; i++)
    {
      if(key == arr[i])
      {
        flag = 1;
        cout<<"Item found at position :" <<i+1;
        count++;
      }
    }
    if(flag == 0)
    {
        cout<<"Enter value is not found";
    }
    
}