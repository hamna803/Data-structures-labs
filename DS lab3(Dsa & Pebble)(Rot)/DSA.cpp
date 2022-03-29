#include<iostream>
#include"DSA.h"
using namespace std;
int main()
{

   int values1,values2,i,n;
   DSA *obj;
   obj=new DSA;
   
   cout<<"Dynamic Safe Array :"<<endl;
   obj->set_no_of_elements(n);
   obj->get_no_of_el();
   obj->insertion(values1);
   cout<<"Array Elements ----> ";
   obj->display();
   obj->searching();
   cout<<endl<<"-------------------------"<<endl;
   cout<<endl;
  
  
   ODSA *obj3=new ODSA;
   cout<<"Ordered Dynamic Safe Array:"<<endl;
   obj3->set_no_of_elements(n);
   obj3->get_no_of_el();
   obj3->insertion_ordered(values2);
   cout<<"Ordered Array Elements ----> ";
   obj3->display();
   obj3->searching();
   cout<<endl<<"-------------------------"<<endl;
   cout<<endl;
   
   
   UDSA *obj4=new UDSA;
   cout<<"Unordered Dynamic Safe Array:"<<endl;
   obj4->set_no_of_elements(n);
   obj4->get_no_of_el();
   obj4->insertion(values2);
   obj4->searching();
   cout<<"Unordered Array Elements ----> ";
   obj4->display();
   cout<<endl<<"-------------------------"<<endl;
   cout<<endl;


  

}
