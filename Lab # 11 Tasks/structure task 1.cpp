/*  Declare a structure Product. It has the following members
1. Code (int)
2. Description(string)
3. Packaging (char [L, S, M for small, medium, large])
4. Price (float)
5. Discount (float: 2 means 2% discount on the original price)
Create an array of 10 products and initialize it by hardcoding the values. Now print the details 
of all those products in Large packaging whose net price (after applying discount) is between 
200 – 1000.   */
#include<iostream>
using namespace std;
struct product{
	int code;
	string description;
	char packaging;
	float price;
	float discount;
};
int main(){
	product products[10]={
	    {1001, "Product A", 'L', 250.0, 0.02},
        {1002, "Product B", 'M', 300.0, 0.02},
        {1003, "Product C", 'S', 150.0, 0.02},
        {1004, "Product D", 'L', 800.0, 0.02},
        {1005, "Product E", 'L', 500.0, 0.02},
        {1006, "Product F", 'S', 100.0, 0.02},
        {1007, "Product G", 'M', 600.0, 0.02},
        {1008, "Product H", 'L', 950.0, 0.02},
        {1009, "Product I", 'M', 400.0, 0.02},
        {1010, "Product J", 'L', 300.0, 0.02}
    };
    cout << "Products in Large Packaging with Net Price between 200 and 1000:\n\n";
    for(int i = 0; i < 10; i++){
    	if(products[i].packaging=='L'){
    		float netprice= products[i].price - (products[i].price * products[i].discount);
    		if(netprice>=200 && netprice<=1000){
    			cout<<"Code: " <<products[i].code <<endl;
    			cout<<"Description: "<<products[i].description <<endl;
    			cout<<"Packaging: "<<products[i].packaging <<endl;
    			cout<<"Price: "<<products[i].price <<endl;
    			cout<<"Discount: "<<products[i].discount <<endl;
    			cout<<"Net Price: "<<netprice <<endl <<endl;
			}
		}	
	}
	return 0;
}

