#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

struct dollar {
   // float usd;
   float eur;
   float yen;
   float pound;
   float money;
};

int main(){

   int currentCurrency;
   
   cout << "Enter number corresponding to the currency you have:" << endl;
   cout << "1.USD (U.S. Dollar)" << endl;
   cout << "2.EUR (European Euro)" << endl;
   cout << "3.JPY (Japanese Yen)" << endl;
   cout << "4.GBP (British Pound)" << endl;
   cout << ">> ";

   cin >> currentCurrency;

   float money;
   cout << "Enter the money you have:" << endl;
   cin >> money;

   int convertCurrency;

   cout << "Enter number corresponding to the currency you wish to convert to:" << endl;
   cout << "1.USD (U.S. Dollar)" << endl;
   cout << "2.EUR (European Euro)" << endl;
   cout << "3.JPY (Japanese Yen)" << endl;
   cout << "4.GBP (British Pound)" << endl;
   cout << ">> ";

   cin >> convertCurrency;

   dollar dollarConvert;
   float convert;

   switch (currentCurrency) {
      case 1:
         dollarConvert.money = money * 1.00;
         // convert = money * 1.00;
      break;
      case 2:
         dollarConvert.money = money * 1.09;
         // convert = money * 1.09;
      break;
      case 3:
         dollarConvert.money = money * 0.0077;
         // convert = money * 0.0077;
      break;
      case 4:
         dollarConvert.money = money * 1.24;
         // convert = money * 1.24;
      break;
      default:
      break;
   }

   dollarConvert.eur = dollarConvert.money * 0.92;
   dollarConvert.yen = dollarConvert.money * 130.15;
   dollarConvert.pound = dollarConvert.money * 0.81;

   

   // cout << "Converted money = " << dollarConvert.money << endl;

   switch (convertCurrency) {
      case 1:
         cout << "Converted money = " << dollarConvert.money << endl;
      break;
      case 2:
         cout << "Converted money = " << dollarConvert.eur << endl;
      break;
      case 3:
         cout << "Converted money = " << dollarConvert.yen << endl;
      break;
      case 4:
         cout << "Converted money = " << dollarConvert.pound << endl;
      break;
      default:
      break;
   }

   return 0;
}