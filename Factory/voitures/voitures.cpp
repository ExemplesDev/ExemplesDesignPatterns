#include <iostream> // pour std::cout
#include <string>   // pour std::string

using namespace std;


class Voiture {
public:
virtual string getMarque() const = 0;
friend ostream &operator<<(ostream &o,const Voiture *v)
{
return o << v->getMarque();
}
};

class Renault : public Voiture {
public:
string getMarque() const { return "Renault"; }
};

class Fiat : public Voiture {
public:
string getMarque() const { return "Fiat"; }
};

// cette fonction est indépendante du type concret
void f(const Voiture *v) {
cout << "Voiture " << v << endl;
}

// cette partie du code est dépendante du type concret!

int main(int argc, char **argv) {

	Voiture *v = new Renault();
	f(v);

	return 0;
}
