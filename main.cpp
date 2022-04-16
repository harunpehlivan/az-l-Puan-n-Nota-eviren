 
#include <iostream>
using namespace std;
//www.yazilimkodlama.com
int main()
{
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   int puan;
   cout<<"Puanı Girin : ";
   cin>>puan;
   if(puan>100)
   {
   	cout<<"Geçersiz.";
   }
   else if(puan>84)
   {
   	cout<<"5";
   }
    else if(puan>69)
   {
   	cout<<"4";//www.yazilimkodlama.com
   }
    else if(puan>59)
   {
   	cout<<"3";
   }
    else if(puan>49)
   {
   	cout<<"2";
   }
    else if(puan>=0)
   {
   	cout<<"1";
   }
   else
   {
   	cout<<"Geçersiz.";//www.yazilimkodlama.com
   }
}
 