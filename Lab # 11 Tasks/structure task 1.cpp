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
	    {1001, "Product A", 'L', 250.0, 10.0},
        {1002, "Product B", 'M', 300.0, 5.0},
        {1003, "Product C", 'S', 150.0, 15.0},
        {1004, "Product D", 'L', 800.0, 20.0},
        {1005, "Product E", 'L', 500.0, 0.0},
        {1006, "Product F", 'S', 100.0, 25.0},
        {1007, "Product G", 'M', 600.0, 30.0},
        {1008, "Product H", 'L', 950.0, 15.0},
        {1009, "Product I", 'M', 400.0, 10.0},
        {1010, "Product J", 'L', 300.0, 5.0}
    };
    cout << "Products in Large Packaging with Net Price between 200 and 1000:\n\n";
    for(int i = 0; i < 10; i++){
    	if(products[i].packaging=='L'){
    		float netprice= products[i].price - (products[i].price * (products[i].discount/100));
    		if(netprice>=200 && netprice<=1000){
    			cout<<"Code: " <<products[i].code <<endl;
    			cout<<"Description: "<<products[i].description <<endl;
    			cout<<"Packaging: "<<products[i].packaging <<endl;
    			cout<<"Price: "<<products[i].price <<endl;
    			cout<<"Discount: "<<products[i].discount <<"%" <<endl;
    			cout<<"Net Price: "<<netprice <<endl <<endl;
			}
		}	
	}
	return 0;
}

