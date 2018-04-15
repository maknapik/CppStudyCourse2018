#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

class Punkt
{
    private:
        static int licznik;
        double x, y, z;
    public:
        Punkt();
        Punkt(double X, double Y, double);
        
        double getZ() { return z; }
        void setZ(double Z) { z = Z; }
        
        void wypisz() { cout << fixed << setprecision(2) << setw(8) << x << ",\t" << setw(8) << y << ",\t" << setw(8) << z << endl; }
        
        bool isFarther(Punkt p);
        
        static void setLicznik(int l) { licznik = l; }
        static int getLicznik() { return licznik; }
        
        void zapisz(ostream &os);
        void wczytaj(istream &is);
};
//////////////////////////////////////
int Punkt::licznik = 0;
//////////////////////////////////////
Punkt::Punkt()
{
    licznik++;
    
    //srand(time(NULL));
    x = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    y = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    z = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}
//////////////////////////////////////
Punkt::Punkt(double X, double Y, double Z = 1.0) : x(X), y(Y), z(Z)
{
    licznik++;
}
//////////////////////////////////////
bool Punkt::isFarther(Punkt p)
{
    if(sqrt(x*x + y*y + z*z) > sqrt(p.x*p.x + p.y*p.y + p.z*p.z)) return true;
    return false;
}
//////////////////////////////////////
void Punkt::zapisz(ostream &os)
{
    os << fixed << setprecision(2) << setw(8) << x << ",\t" << setw(8) << y << ",\t" << setw(8) << z;
}
//////////////////////////////////////
void Punkt::wczytaj(istream &is)
{
    is >> x >> y >> z;
}
//////////////////////////////////////
int main()
{
    Punkt p1;
    cout << "p1: ";
    p1.wypisz();
    
    Punkt p2 = Punkt(0, 0, 0);
    cout << "p2: ";
    p2.wypisz();
    p2.setZ(0.5);
    cout << "p2: ";
    p2.wypisz();
    cout << "z from p2: " << p2.getZ() << endl;
    if(p1.isFarther(p2))
    {
        cout << "p1 is farther from (0, 0, 0) than p2\n";
    }
    else
    {
        cout << "p2 is farther from (0, 0, 0) than p1\n";
    }

    cout << "Licznik: " << Punkt::getLicznik() << endl;
    Punkt::setLicznik(0);
    cout << "Licznik: " << Punkt::getLicznik() << endl;
    
    ostream &os(cout);
    cout << "p1 from zapisz(): ";
    p1.zapisz(os);
    cout << "\nType coordinates: ";
    
    istream &is(cin);
    p1.wczytaj(is);
    cout << "p1 from wczytaj(): ";
    p1.wypisz();
    
    int t;
    cin >> t;
}
