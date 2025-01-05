#include<bits/stdc++.h>

/*int main(){
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      std::cout << "*";
    }
    std::cout << '\n';
  }
  return 0;
}*/

void print1(int n){
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      std::cout << "*";
    }
    std::cout << '\n';
  }
}

int main(){
  int n;
  std::cin >> n;
  print1(n);

  return 0;
}
