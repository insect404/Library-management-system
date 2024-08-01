// #include<iostream>
// #include<limits.h>
// #include <algorithm>
// using namespace std;
// int maxi(int arr[], int n)
// {
//     int maxi= INT_MIN;
    
//     for(int i=0; i<n; i++)
//     {
//         maxi= max(maxi,arr[i]);
//     }
//     return maxi;
// }

// int mini(int arr[], int n)
// {
//     int mini= INT_MAX;
    
//     for(int i=0; i<n; i++)
//     {
//         mini= min(mini,arr[i]);
//     }
//     return mini;
// }

// int main(){
//     int x;
//     // int arr[];
//     cin>>x;
    
//     int arr[100];

//    for(int i=0; i<x; i++)
//    {
//     cin>>arr[i];
//    }

//     cout<<"maximum number is "<< maxi(arr,x)<<endl;
//     cout<<"minimum number is "<< mini(arr,x)<<endl;

// return 0;
// }

// #include<iostream>
// using namespace std;

// int SumOddIntegers(int arr[], int n)
// {
//     int sum=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]%2!=0)
//         {
//             sum=sum+arr[i];
//         }
//     }
//     return sum;
// }

// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++)
// {
//     cin>>arr[i];
// }
// cout<<SumOddIntegers(arr,n)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// if(n<10)
// {
//     cout<<n;
// }
// else{
// while(n>9)
// {
//     if(n%2==0)
//     {
//         n= ((n-2)/2);
//     }
//     else
//     {
//         n=(n/2);
//     }
// }
// cout << n << endl;  
// }
// return 0;
// }

// #include<iostream>
// using namespace std;

// int GetSup(int arr[], int n)
// {
//     if (n==0)
//     {
//         return 0;
//     }
//     int count=1;

//     int MaxFromRight = arr[n-1];

//     for(int i=n-2; i>=0; i--)
//     {
//         if(arr[i]>MaxFromRight)
//         {
//             count++;
//             MaxFromRight=arr[i];
//         }
       
//     } return count;
// }

// int main(){
// int x;
// cin>>x;
// int arr[x];

// for(int i=0; i<x; i++)
// {
//     cin>>arr[i];
// }
// cout<<"total sup numbers are:"<<GetSup(arr,x)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;

// #define MOD 100000007

// int GetPeices(int n)
// {
//     long long result = (n*(n+1LL)/2)+1;
//     return result%MOD;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<"max no of peices are: "<<GetPeices(n)<<endl;

// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int maxi=0;

// void solve(int idx, vector<int>&arr, 
// vector<int>aux)
// {
//     if(idx==arr.size()) // adge case
//     {
//         if(maxi<aux.size())maxi=aux.size();
//         return;
//     }

//     if(aux.size()==0 || aux[aux.size()-1]*3==arr[idx])  // pick
//     {
//         aux.push_back(arr[idx]);
//         solve(idx+1,arr,aux);
//         aux.pop_back();
//     }

//     solve(idx+1,arr,aux); // not pick

// }

// int main() {
//     int n;
//     cin>>n;

//     vector<int>arr(n);

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     vector<int>aux;
//     int idx=0;

//     solve(idx,arr,aux);

//     cout<<maxi;


//     return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n;
// cin>>n;

// int count=0;

// while(n)
// {
//     count+=n&1;
//     n>>=1;
// }
//  int ans=pow(2,count)-1;
//  cout<<ans;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
string a;
cin>>a;
if (a=="rock")
{
cout<<"paper";
}
else if (a=="paper")
{
cout<<"scissor";
}
else if(a=="scissor")
{
cout<<"rock";
}
return 0;
}