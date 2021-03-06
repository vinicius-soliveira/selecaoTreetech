/*
 * Equipamento.cpp
 *
 *  Created on: Sep 28, 2020
 *      Author: Vinicius
 */

#include "Equipamento.h"
#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Equipamento::Equipamento() {
	this-> nome  = " ";
	this-> numeroSerie  = " ";
	this->tipo = " ";
	this->data = " ";

}

Equipamento::~Equipamento() {

}

Equipamento::Equipamento(string nome, string numeroSerie, string tipo, string data)
{
	this-> nome  = nome;
    this-> numeroSerie  = numeroSerie;
	this->tipo = tipo;
    this->data = data;
}


const string& Equipamento::getData() const {
	return data;
}

void Equipamento::setData(const string &data) {
	this->data = data;
}

const string& Equipamento::getNome() const{
	return nome;
}

void Equipamento::setNome(const string &nome) {
	this->nome = nome;
}

const string& Equipamento::getNumeroSerie() const{
	return numeroSerie;
}

void Equipamento::setNumeroSerie(const string &numeroSerie) {
	this->numeroSerie = numeroSerie;
}

const string& Equipamento::getTipo() const {
	return tipo;
}

void Equipamento::setTipo(const string &tipo) {
	this->tipo = tipo;
}

void Equipamento::detalharEquipamento()
{
	cout << "\nNome do equipamento: " << this->nome << endl
	<< "N�mero de S�rie: " << this->numeroSerie << endl
	<< "Tipo: " << this->tipo << endl
	<< "Data de Cadastro: " << this->data << endl;

}

