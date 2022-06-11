#include<iostream>
using namespace std;
int cnt=0;
int x[10]={0};
int place(int k,int i)
{
    int j;
    for(j=1;j<k;j++)
    {
        if(x[j]==i or(abs(x[j]-i)==abs(j-k)))
        {
            return 0;
        }
    }
    return 1;
}
void n_queen(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                cnt++;
                for(int i=1;i<=n;i++)
                {
                    cout<<" \t"<<x[i];
                }
                cout<<endl;
            }
            else{
                n_queen(k+1,n);
            }
        }
    }

}

int main(){
    int m;
    cout<<"Enter the value of n: ";
    cin>>m;
    n_queen(1,m);
    cout<<"total no. of ways are "<<cnt;
    return 0;
}
