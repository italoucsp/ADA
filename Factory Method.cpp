#include "pch.h"
#include "Fabrica.h"
#include <vector>

#define LIMITE 5

int main()
{
	vector<MDP_GooglePlay*> pagos;
	vector<string> solicitudes;

	for (int i = 0; i < LIMITE; i++) {
		string solicitud_de_pago;
		cout << "Id de pago: "; cin >> solicitud_de_pago;
		solicitudes.push_back(solicitud_de_pago);
	}
	double precio = 9.99;

	for (auto id : solicitudes) {
		pagos.push_back(Fabrica_MDP::generarModoPago(id, precio));
	}

	cout << "=====================================================" << endl;
	for (auto pago : pagos) {
		if (pago) {
			pago->obtenerDatos();
			pago->obtenerSaldo();
			pago->realizarPago();
			pago->enviarFactura();
			delete pago;
		}
		else {
			cout << "--no hay pago--" << endl;
		}
		cout << "=====================================================" << endl;
	}
}