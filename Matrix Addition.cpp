#include<iostream>
using namespace std;
//Easy C++_Code: Ajmal Hussain
int main(){
    int r,c,i,j;
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    int a[r][c],b[r][c],sum[r][c];
    cout<<endl<<"Enter elements of 1st Matrix:"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
          cout<<"Matrix["<<i<<"]["<<j<<"]: ";
          cin>>a[i][j];
        }
    }
    //Learnig never ends_Ajmal Hussain
    cout<<endl<<"Enter elements of 2nd Matrix:"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
          cout<<"Matrix["<<i<<"]["<<j<<"]: ";
          cin>>b[i][j];
        }
    }
    //sum
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"1st Matrix:"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"2nd Matrix:"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Sum of 1st and 2nd Matrix:"<<endl;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }
    //Thank You!
    //By: Md Ajmal Hussain
    return 0;
}