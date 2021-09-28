#include "header.hpp"
// recursion part 4
// int total,n,x[100];
//
// int check(int i,int t){
//   if(i==n)
//     return total==t;
//   return check(i+1,t+x[i]) || check(i+1,t);
// }
//
// int main(){
//   int i;
//   cout<<"Enter total: ";
//   cin>> total;
//   cout<<"Enter n: ";
//   cin>> n;
//
//   cout <<"\nEnter "<<n<<" numebrs: ";
//   for(i=0; i<n; i++)
//     cin>>x[i];
//
//   if(check(0,0)==1)
//     cout<<"\nYes\n";
//   else
//     cout<<"\nNo\n";
//
//   return 0;
// }
// --------------------------


int main(){
  int n;


  cout <<"Enter how number you want to add: ";
  cin >> n;
  int arr[n];
  cout <<"\nEnter "<<n<<" To fill the array: ";

  for (int i=0; i < n; i++)
    cin >> arr[i];

  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n, greater<int>());

  string numbers = " ";
  for (int i=0; i < n; i++)
    numbers  += to_string(arr[i]);

  int finalNum = stoi(numbers);

  cout <<finalNum+1;
    return 0;
}
