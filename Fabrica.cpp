#include "pch.h"
#include "Fabrica.h"


MDP_GooglePlay*  Fabrica_MDP::generarModoPago(string id, double precio) {

	if (id == "saldoGP") {
		return new Saldo_GooglePlay(precio);
	}
	else if (id == "tarjeta") {
		return new Tarjeta_Credito(precio);
	}
	else if (id == "paypal") {
		return new Paypal(precio);
	}
	else {
		cout << "El metodo de pago ingresado no esta permitido o no existe." << endl;
	}
	return NULL;
}
