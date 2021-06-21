#include <iostream>
#include<stdlib.h>

//for translate tr 
#include<locale.h>

//for find method
#include <algorithm>

//for begin ,end methods
#include <iterator>

using namespace std;

int menuItems[4] = {1,2,3,4}; 

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
      return true;
}

template<size_t N>
int Count(int (&arr)[N]) {
    return N;
}

bool isExistValueAtMenuItems(int value){
	for (int i = 0; i < Count(menuItems); i++){
		if(menuItems[i] == value) return true;
	}
	return false;
}

double Addition(double a, double b){
	return a+b;
}
double Subtraction(double a, double b){
	return a-b;
}
double Multiplication(double a, double b){
	return a*b;
}
double Division(double a, double b){
	return a/b;
}

int main() {
  //initialize constants
  setlocale(LC_ALL, "Turkish");
  char x[100] ="",y[100]="";
  int z = 0;
  bool isMenuItem = false;
  char *string, *stopstring;                                                   
  double a,b;
  
  //Show Menu
  cout << "  				-Menü- \n" ;
  cout << " 	1.Toplama " ;
  cout << "  	2.Çýkarma " ;
  cout << " 	3.Çarpma " ;
  cout << " 	4.Bölme \n\n" ;
  
  cout << " Ýþlem Seçin:" ;
  cin >> z;
  
  //Check Menu Item  
   isMenuItem = isExistValueAtMenuItems(z);
   
   if(!isMenuItem){
	cout << "Lütfen Menüden seçin sayýyý!!\n";
  	system("pause");
  	return 0;
	}

  //Read inputs
  cout << " \nÝlk Sayýyý Girin:" ;
  cin >> x;
  cout << " \nÝkinci Sayýyý Girin:" ;
  cin >> y;
   
   if(!check_number(x) || !check_number(y)){
    cout << "Lütfen Geçerli Sayý Yazýn!!\n";
  	system("pause");
  	return 0;
   }
   //convert string to double
  a = strtod(&x[0], &stopstring);
  b = strtod(&y[0], &stopstring);
  
  cout << "\nSonuç:";
  switch(z){
  		case 1:
  		cout << Addition(a,b);
  		break;
  		case 2:
  		cout << Subtraction(a,b);
  		break;
  		case 3:
  		cout << Multiplication(a,b);
  		break;
  		case 4:
  		cout << Division(a,b);
  		break;
  }
  
  cout << "\n\n";
  system("pause");
  return 0;
} 
