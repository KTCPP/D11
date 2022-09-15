#pragma once
#include "pch.h";
#include <string>

class Mensch {
public:
	int alter;
	double gewicht; double hoehe;
	std::string name;
	Mensch() {
		alter = 1;
		gewicht = 0.0;
		hoehe = 0.0;
		name = "Max Mustermann";
	}
	void Mensch::essen(int gewicht) {
		this->gewicht += gewicht;
	}
	void Mensch::drucke() {
		std::string text = std::to_string(alter) + " ";
		text += std::to_string(gewicht) + " " + std::to_string(hoehe) + " " + name + " ";
		print(text);
	}
	virtual void Mensch::print(std::string text) {
		std::cout << text << std::endl;
	}
};

class Submensch : public Mensch {
public:
	std::string text = "false";
	void Submensch::print(std::string text) {
		this->text = text;
	}
};
