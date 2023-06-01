
#include<iostream>
#include<math.h>

using namespace std;



int main(){     
	double num=4, denom=1, pi=0, prec=0;
    cout<<"Ingrese la presicion de decimales deseada: "; cin>>prec;
    double iter=pow(10,prec);
    int alt=1;
    for (double aux=0; aux<iter; aux++)
    {
        pi = pi + alt*(num/denom);
        denom = denom+2;
        alt = alt*(-1);
    }

    cout.precision(7);
    cout<<"Valor de pi = "<<pi;
    
	
	return 0;
}
