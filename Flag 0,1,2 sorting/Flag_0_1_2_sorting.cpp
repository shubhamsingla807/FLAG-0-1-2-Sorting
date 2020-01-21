#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[10000];
   int c1=0,c2=0,c3=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   int freq[n] ={0};
   for(int i=0;i<n;i++){
   if(arr[i] == 0){
    c1++;
   }

   if(arr[i] == 1){
    c2++;
   }

   if(arr[i] == 2){
    c3++;
   }
 }

  for(int i=0;i<n;i++){
    if(i<c1){
        freq[i] = 0;
    }
  }

  for(int i=0;i<n;i++){
    if(i>=c1 && i<c1+c2){
        freq[i] = 1;
    }
  }

  for(int i=0;i<n;i++){
    if(i>=c2+c3 && i<n){
        freq[i] = 2;
    }
  }

  for(int i=0;i<n;i++){
    cout<<freq[i];
  }

}

