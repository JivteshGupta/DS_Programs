#include<iostream>
using namespace std;
int hashing(int key,int size)
{
  return key%size;
}
int main()
{
  int size,key,n,loc,i;
  cin>>size;
  int arr[size]={0};
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>key;
    loc=hashing(key,size);
    if(arr[loc]==0)
      arr[loc]=key;
    else
    {
      int j=0;
      while(true)
      {
        loc=((key%size)+j)%size;
        if(arr[loc]==0)
        {
          arr[loc]=key;
          break;
        }
        else
          j++;
      }
    }
  }
  for(i=0;i<size;i++)
  {
    cout<<arr[i]<<"  ";
  }
}
