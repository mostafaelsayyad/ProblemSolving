#include<iostream>
using namespace std;
int main ()
{
        int arr[50];
        int testCases ;
        int N;
       
 
        cin>>testCases;
        for(int i=0; i<testCases ; i++){
                cin>>N;
                int ups = 0 , downs = 0; //counters
                for(int ii=1; ii<=N; ii++){
                        cin>>arr[ii];
                }
                for(int j=1; j<N; j++){
                        if(arr[j]<arr[j+1])
                                ++ups;
                    if(arr[j]>arr[j+1])
                                ++downs;
                        if(arr[j] == arr[j+1])
                                continue;
                        }
       
               
                cout<<"Case "<<i+1<<": "<<ups<<" "<<downs<<endl;
        }
        return 0;
}
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
int v[50];
	int testcase;
	cin>>testcase;
	int n;
int count_high=0;
		int count_low=0;
		
for(int j=0;j<testcase;j++)
{
		count_high=0;
		count_low=0;	
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		
		for(int i=0;i<n;i++)
		{
			if(v[i]<v[i+1])
			{
				count_high++;
			}
			else if(v[i]>v[i+1])
			{
				count_low++;
			}
			
		}
		
	
			cout<<"Case "<<j+1<<": "<<count_high<<" "<<count_low<<endl;
}
 
		
	
	return 0;
}
