#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



    void reverse(int A[], int N)
{
    int low = 0, high = N - 1;

    while(low < high)
    {
        int temp = A[low];

        A[low] = A[high];

        A[high] = temp;

        low++;
        high--;
    }
}

    
int main() {
    int N;
    cout<<"Size of array is:";
    cin>>N;
    cout<<endl;
    
    
      int A[N] ;
      for(int i=0;i<N;i++){
          cin>>A[i];
      }

      cout<<"Before Reverse"<<endl;

       for(int i = 0; i < N; i++)
       {
               cout<<A[i]<<" ";
       }

       cout<<endl;

       reverse(A, N);

       cout<<"After Reverse"<<endl;

       for(int i = 0; i < N; i++)
       {
               cout<<A[i]<<" ";
       }
 return 0;    
}

