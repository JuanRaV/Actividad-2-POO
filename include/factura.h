#ifndef FACTURA_H
#define FACTURA_H
#include <string>

using namespace std;

class Factura
{
    public:
        Factura();
        ~Factura();
        string rfc;
        string fecha;
        double monto;
        string domicilio;
        string con_fiscal;
        int id_venta;

        void Capturar();

};

#endif // FACTURA_H
