#include <iostream>
#include "./../include/complexo.h"
#include <iomanip>
#include <string>

using namespace std;
using std::endl;

int main(int argc, char* argv[]){

    Complexo c1(atof(argv[1]), atof(argv[2]));
    Complexo c2(atof(argv[3]), atof(argv[4]));

    if(*argv[5] == '+'){
        Complexo resultado(c1 + c2);
        cout << resultado;
    }
    else if(*argv[5] == '-'){
        Complexo resultado(c1 - c2);
        cout << resultado;
    }
    else if(*argv[5] == '*'){
        Complexo resultado(c1 * c2);
        cout << resultado;
    }
    else if(*argv[5] == '|'){
        double resultado1 = c1|c2;
		double resultado2 = c2|c1;   
		
		cout << setprecision(2) << fixed;
		cout << resultado1 << ";" << resultado2 << endl; 
    }
    
    return 0;
}