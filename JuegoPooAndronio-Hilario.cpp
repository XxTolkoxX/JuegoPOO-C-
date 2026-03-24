#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Juego {
private:
	int numeroSecreto;
	int intento;
	int intentosRealizados;
	
public:
	

	Juego() {
		srand(time(0));
		numeroSecreto = rand() % 100 + 1;
		intentosRealizados = 0;
	}
	

	void pedirIntento() {
		cout << "Ingresa un numero (1-100): ";
		cin >> intento;
		intentosRealizados++;
	}
	

	bool verificarIntento() {
		
		if (intento > numeroSecreto) {
			cout << "Muy alto!\n";
			return false;
		}
		else if (intento < numeroSecreto) {
			cout << "Muy bajo!\n";
			return false;
		}
		else {
			cout << "FELICIDADES! Adivinaste el numero.\n";
			cout << "Intentos realizados: " 
				<< intentosRealizados << endl;
			return true;
		}
	}
	
	
	void jugar() {
		bool ganado = false;
		
		cout << "===== JUEGO ADIVINA EL NUMERO =====\n";
		
		while (!ganado) {
			pedirIntento();
			ganado = verificarIntento();
		}
	}
};


int main() {
	
	Juego juego; 
	juego.jugar();
	
	return 0;
}
