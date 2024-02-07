#include<iostream>
using namespace std; 
int main()
{
 int A [3][3]= {{1,2,3} , {4,5,6} , {7,8,9}};
 for(int j = 0; j < 3; j++)
 {
        int count = 0;
    for(int i = 0; i < 3; i++)
    {
        //count +=A[i][j];
        if(j>=0 || j>=1 || j>=2)
        {
            count= count +A [i][j];
        }
    }
    cout<<" "<<count;
    cout<<endl;
 }

 return 0;

}