#pragma once
#include <iostream>
#include <string>

using namespace std;

class MDP_GooglePlay {
public:
	void obtenerDatos();
	virtual void enviarFactura() = 0;
	virtual void obtenerSaldo() = 0;
	virtual void realizarPago() = 0;
protected:
	string correoElectronico;
	double precio;
};

class Saldo_GooglePlay : public MDP_GooglePlay {
public:
	Saldo_GooglePlay(double);
	void obtenerSaldo();
	void realizarPago();
	void enviarFactura();
};

class Tarjeta_Credito : public MDP_GooglePlay {
public:
	int n_de_tarjeta;
	Tarjeta_Credito(double);
	void obtenerSaldo();
	void realizarPago();
	void enviarFactura();
};

class Paypal : public MDP_GooglePlay {
public:
	string cuenta_pypl;
	Paypal(double);
	void obtenerSaldo();
	void realizarPago();
	void enviarFactura();
};