#include <ostream>

class Complexo{
    private:
        double real;
        double imaginario;

    public:
        //construtor e destrutor
        Complexo(double r, double i);
        Complexo();
        ~Complexo();

        //sobrecarga de operadores
        Complexo operator+(Complexo &c); 
		Complexo operator-(Complexo &c);
		Complexo operator*(Complexo &c); 
		float operator|(Complexo &c); 

        //sobrecarga impressão
        friend std::ostream& operator<<(std::ostream &o, Complexo const &c);
};