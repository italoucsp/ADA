#include "pch.h"
#include "Producto.h"

void MDP_GooglePlay::obtenerDatos() {
	correoElectronico = "user123@gmail.com";
	cout << "Obteniendo correo electronico asociado a la cuenta actual." << endl;
}

//===============================================================================

Saldo_GooglePlay::Saldo_GooglePlay(double precio) {
	cout << "Metodo de pago escogido: Saldo de Google Play" << endl;
	this->precio = precio;
}

void Saldo_GooglePlay::obtenerSaldo() {
	cout << "Obteniendo saldo de la cuenta actual de GooglePlay." << endl;
}

void Saldo_GooglePlay::realizarPago() {
	cout << "Descontando saldo de la cuenta actual de Google Play." << endl;
}

void Saldo_GooglePlay::enviarFactura() {
	cout << "Creando factura de modo: Pago por Saldo de Google Play..." << endl;
	cout << "Enviando factura a: " << correoElectronico << endl;
}

//**********

Tarjeta_Credito::Tarjeta_Credito(double precio) {
	cout << "Metodo de pago escogido: Tarjeta de Credito" << endl;
}

void Tarjeta_Credito::obtenerSaldo() {
	cout << "Verificando tarjeta y obteniendo saldo disponible." << endl;
}

void Tarjeta_Credito::realizarPago() {
	cout << "Descontando saldo de la cuenta bancaria." << endl;
}

void Tarjeta_Credito::enviarFactura() {
	cout << "Creando factura de modo: Pago por Tarjeta de Credito ..." << endl;
	cout << "Enviando factura a: " << correoElectronico << endl;
}

//**********

Paypal::Paypal(double precio) {
	cout << "Metodo de pago escogido: Paypal" << endl;
}

void Paypal::obtenerSaldo() {
	cout << "Obteniendo saldo de la cuenta de Paypal." << endl;
}

void Paypal::realizarPago() {
	cout << "Descontando saldo de la cuenta de Paypal" << endl;
}

void Paypal::enviarFactura() {
	cout << "Creando factura de modo: Pago por Paypal..." << endl;
	cout << "Enviando factura a: " << correoElectronico << endl;
}

//**********