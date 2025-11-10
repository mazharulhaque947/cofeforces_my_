//Increasing Subsequences


#include<bits/stdc++.h>
using namespace std;

int ar(int a[],long long n){
int l,j,i;
l=0;
while(n>0){  a[l]=n%2; n=n/2; l++; }


return l;
}

int main(){

long long t,j,i,o,p,k,l,m,n;
int a[200],b[200];
cin>>t;

while(t--)
{
 cin>>n;
 p=0;
 if(n%2==1){ n=n-3; p=1; }
if(n==0){ cout<<"2\n1 1\n"; }
  else if(n<=1){ cout<<-1<<"\n"; }
   else{

    k=ar(a,n);
    o=0;
    l=0;
    for(i=k-1;i>=0;i--){ if(a[i]==1){ o++;for(j=0;j<i;j++){  b[l]=1+ ( ((i)*(i-1))/2 )+j; l++; }  }  }



     for(i=0;i<o-1+p*3;i++){   b[l]=0; l++;  }

     cout<<l<<"\n";
     for(i=0;i<l;i++){   cout<<b[i]<<" ";  }
   }


 cout<<"\n";

}
return 0;
}

