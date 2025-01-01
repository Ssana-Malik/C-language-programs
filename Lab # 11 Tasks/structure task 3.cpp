/*  Declare a two-dimensional array which can be used to store a yearly budget. Each row of the 
array corresponds to a particular budgeted item like rent, electric, gas. Each column of the array 
corresponds to a month, January, February, etc. Of course there are 12 columns corresponding 
to the 12 months of the year. All the data to be placed in the array consists of real numbers.  */
#include<iostream>
using namespace std;
int main(){
    int Store_budget[3][12]; 
    string Months[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
     for(int i=0;i<12;i++){
        cout<<"**** Enter Expensive Of "<<Months[i]<<" ****"<<endl;
        cout<<"Rent: ";
        cin>>Store_budget[0][i];
        cout<<"Electricity Bill: ";
        cin>>Store_budget[1][i];
        cout<<"Gas Bill: ";
        cin>>Store_budget[2][i];
        cout<<endl;
    }
    cout<<"*|*|*| Yearly Budget *|*|*|"<<endl<<endl;
    cout <<"Month \t\tRent \t\tElectricity \tGas" << endl;
    for(int i=0;i<12;i++){
        cout<<Months[i]<<"\t\t";
        cout<<Store_budget[0][i]<<"\t\t";
        cout<<Store_budget[1][i]<<"\t\t";
        cout<<Store_budget[2][i];
        cout<<endl;
    }
    return 0;
}