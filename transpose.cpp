#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int **mtrx= new int*[n];
   for(int i=0;i<n;i++){
    mtrx[i]= new int[n];
   }
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    cin>>mtrx[i][j];
        }
   }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    cout<<mtrx[i][j]<<" ";
        }
        cout<<endl;
   }
   cout<<endl<<endl;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int temp=mtrx[i][j];
        mtrx[i][j]=mtrx[j][i];
        mtrx[j][i]=temp;
    }
   }
   cout<<endl<<endl;

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    cout<<mtrx[i][j]<<" ";
        }
        cout<<endl;
}
}
