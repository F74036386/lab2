#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<string>
#include"bmi.h"
using namespace std;

int main(){
ifstream fi("file.in",ios::in);
ofstream fo("file.out",ios::out);
if(!fi||!fo){
cout<<"can not open the file"<<endl;
exit(1);
}

double in_high ,in_mass;
BMI human;
while(fi>>in_high>>in_mass){
human.setmass(in_mass);
human.sethigh(in_high/100);
double bmi=human.bmivalue();
string out=human.category(bmi);
if(in_high!=0&&in_mass!=0){
fo<<bmi<<"\t"<<out<<endl;
}
}


	return 0;
}



