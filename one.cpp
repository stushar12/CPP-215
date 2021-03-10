#include <iostream>
using namespace std;
#define int long long int

int32_t main() 
{
    int test;
    cin>>test;

    while(test--)
    {
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            arr[i]=sum/(i);
            sum=sum+arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }

    for(int i:arr)
    cout<<i<<" ";
	
    cout<<endl;
    }
	
}