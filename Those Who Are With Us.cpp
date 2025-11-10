// codeforces.com Those Who Are With Us
#include<bits/stdc++.h>

using namespace std ;
int co(const void *a , const void *b)
{

    return (*(int*)a - *(int *)b);

}
int main()
{
    int a[100000],b[100000],d[100000],l,k,t,o,p,m,n,i,j,s,x,y,xc,yc,u,v,z,px[100000],py[100000],ppx,ppy;
    cin>>t;
    while(t--){

        cin>>n>>m;
        int c[n][m],q[n][m];
        
        s=0;
        l=0;
        ppx=ppy=0;
        for(i=0;i<n;i++){ for(j=0;j<m;j++){ q[i][j]=0; cin>>c[i][j];if(c[i][j]>s){ s=c[i][j];l=0;a[l]=i; b[l]=j; l++;  }
         else if(c[i][j]==s){  a[l]=i; b[l]=j; l++;  }

         }  }
         for(i=0;i<l;i++){q[a[i]][b[i]]=1;}
         o=p=0;
         //qsort(a,l,sizeof(int),co);
        //qsort(b,l,sizeof(int),co);

       // for(i=0;i<n-1;i++){if(a[i+1]!=a[i]){ p++;} if(b[i+1]!=b[i]){ o++;} }
       // if(p<=1&&o<=1){ cout<<s-1; }
        //else { cout<<s; }
        x=y=xc=yc=0;
        u=a[0];
        z=0;
       // cout<<" hhhhhhhhhhhhhhh  "<<l;
        //cout<<"\n";
       // for(i=0;i<l;i++){ cout<<" "<<a[i]; }cout<<"\n";
       // cout<<"\n";
        for(i=0;i<l;i++){ v=a[i]; if(u==v){z++;} else{ if(z>1){ yc+=z;py[ppy]=u;ppy++; y++; }u=a[i]; z=1;} if(i==l-1){  if(z>1){ yc+=z; y++; py[ppy]=u;ppy++; }   }  }


      //  cout<<yc<<"   "<<y;

       /* for(i=0;i<l-1;i++){

            for(j=i+1;j<l;j++){ if()  }

        }*/
         for(i=0;i<l;i++){d[i]=a[i];}

        qsort(b,l,sizeof(int),co);
        // cout<<"\n";
       // for(i=0;i<l;i++){ cout<<" "<<b[i]; }cout<<"\n";
       // cout<<"\n";
        u=b[0];
        z=0;
        for(i=0;i<l;i++){ v=b[i]; if(u==v){z++;} else{ if(z>1){ xc+=z;px[ppx]=u;ppx++; x++; } u=b[i];z=1;} if(i==l-1){  if(z>1){ xc+=z; px[ppx]=u;ppx++;  x++; }   }  }
        //cout<<xc<<"   "<<x;

        if(l<=2){  cout<<s-1; }
        else{

            if((x+y==1)&&(xc+yc+1>=l)){   cout<<s-1; }
            else if( (x==1&& y==1)&&( xc+yc-( q[py[0]][ px[0] ] )==l )  ){ cout<<s-1;}
            else{  cout<<s; }

        }
        cout<<"\n";

    }
    return 0;
}
