#include<iostream>
using namespace std;
#define n 100
int main()
{
    int arr[100],temp;
    int top = -1;
    int s;
    while (top<=n-1)
    {
      cout<<"Enter switch condition "<<endl<<"1 for insertion \t 2 for deletion \t 3 for display "<<endl;
     cin>>s;
     switch (s)
     {
     case /* constant-expression */1:
        /* code */
        if(top == n-1)
        {
            cout<<"Stack overflow, can't enter more elements " << endl;
            break;
        }
        else
        cout<<"Enter elements ";
        top++;
        cin>>arr[top];
       case 2:
       if(top == -1)
       {
        cout<<"Stack underflow " <<endl;
        break;
       }
       else
       {
         cout<<"Element deleted = ";
         temp = arr[top];
         top --;
         cout<<temp<<endl;
       }
       case 3:
       cout<<"Element in stack = ";
       for(int i = top ; i>=0; i--)
       {
         cout<<arr[i];
       }
       cout<<endl;
       break;
    }
}
}