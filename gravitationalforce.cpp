#include <iostream>
     using namespace std;
     
   int main(){
   
   /*program to calculate the gravitational force*/
   
   float F , k , Q , q , R;
   	
   		cout<<"TO CALCULATE THE GRAVITATIONAL FORCE, we consider the charges on the body say q anf Q and the distance between them say R with the gravitational constant G. \n\n";	
   	
   		
   	cout<<"Enter the charge on the first body"<<endl; 
   cout<<"q =";
    cin>>q;
   	
   		cout<<"Enter the charge on the second body"<<endl; 
   cout<<"Q =";
    cin>>Q;
   	
   		cout<<"Enter the distance between the two charges"<<endl; 
   cout<<"R =";
    cin>>R;
   
   	k = 9000000000 ;
   	F =(k*q*Q)/(R*R);
   	
   	cout<<"The gravitational force F = " <<F;		
   	
   return 0;			
   				
   }