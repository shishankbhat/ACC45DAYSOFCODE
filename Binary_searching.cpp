#include<iostream>
using namespace std;
int binarysearch (int arr[], int key, int low,int high)
{
    while(low<=high)
    {
        if(high >= low)
        {
            int mid = (low + high )/2;
            if(key == arr[mid])
            {
               return mid;
            }
            else if(key < arr[mid])
            {
                return binarysearch(arr,key,low,mid-1);
            }
            else
            {
                 return binarysearch(arr,key,mid+1,high);
            }
        }
    }
    return -1;
}
int main()
{
 int i,key, arr[100],num,result;
 cout<<"Enter the size of the array";
 cin>>num;
 for(int i = 0; i < num; i++)
 {
    cout<<"Enter "<< i <<"elements" << " ";
    cin>>arr[i];
 }
 cout<<"Enter elements for searching "<<endl;
 cin>>key;
 result = binarysearch(arr,key,0,num-1);
 if(result == -1)
 {
    cout<<"Element not found ";
 }
 else 
 cout<<"Item found at position "<<result;
 

}