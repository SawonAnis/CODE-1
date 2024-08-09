#include<iostream>
using namespace std;

class adder{
 
 private:
   int total = 2;

   public:
   void addNum(int number){
     total += number;

   }
   int getTotal(){
     return total;
   };
};

int main(){

  adder a;
  a.addNum(20);
  a.addNum(30);
  a.addNum(40);
  a.addNum(8);
  cout << "Total = "
       << a.getTotal();
  return 0;
}