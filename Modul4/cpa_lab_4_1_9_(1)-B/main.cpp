#include <iostream>

using namespace std;

int main()
{
    int c,n;
    cin>>c;
    float **g,sum=0;
    g=new float *[c];
    for(int i=0;i<c;++i){
        cin>>n;
        g[i]=new float [n+2];
        g[i][0]=n;
        for(int j=1;j<=n;++j){
            cin>>g[i][j];

            sum+=g[i][j];
        }
        g[i][n+1]=sum/n;
        sum=0;
        cout<<endl;
    }
    for(int i=0;i<c;++i){
        cout<<"Course "<<i+1<<": final "<<g[i][(int)(g[i][0]+1)]<<", grades: ";
        sum+=g[i][(int)(g[i][0]+1)];
        for(int j=1;j<=g[i][0];++j){

            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Overall final "<<sum/c;
    return 0;
}
