#include<iostream>
#include<ctime>
#include<cstdlib>
#include <algorithm>
using std::cout;
using std::cin;


int main()
{
	int peleador[3];
	int enemigo[5];
	int vidag[3] = { 100,100,100 };
	int vidae[5] = { 50,50,50,50,50 };
	int dmgw = 0;
	int dmge = 0;
	int tgw = 0;
	int tge = 0;


	srand(time(NULL));

	while (vidag > 0 && vidae > 0)
	{
		dmgw = 1 + rand() % 50;
		dmge = 1 + rand() % 30;
		tgw = rand() % 3;
		tge = rand() % 5;

		cout << "Turno de los peleadores \n";
		cout << "\n";

		if (vidag[0] > 0) {
			if (vidae[tge] <= 0) { if (vidae[0] <= 0 && vidae[1] <= 0 && vidae[2] <= 0 && vidae[3] <= 0 && vidae[4] <= 0) { cout << "han muerto todos los enemigos, ganan los peleadores" << "\n"; return 0; } while (vidae[tge] <= 0) { if (vidae[tge] <= 0) { tge = rand() % 5; } } }
			cout << "peleador 1 ataca a enemigo " << 1 + tge << " por " << dmgw << " de daño";
			vidae[tge] = vidae[tge] - dmgw;
			if (dmgw >= 40) { cout << "¡¡CRITICO!!"; }
			cout << "\n";
			cout << "\n";
		}
		dmgw = 1 + rand() % 50;
		tge = rand() % 5;
		if (vidag[1] > 0) {
			if (vidae[tge] <= 0) { if (vidae[0] <= 0 && vidae[1] <= 0 && vidae[2] <= 0 && vidae[3] <= 0 && vidae[4] <= 0) { cout << "han muerto todos los enemigos, ganan los peleadores" << "\n"; return 0; } while (vidae[tge] <= 0) { if (vidae[tge] <= 0) { tge = rand() % 5; } } }
			cout << "peleador 2 ataca a enemigo " << 1 + tge << " por " << dmgw << " de daño";
			vidae[tge] = vidae[tge] - dmgw;
			if (dmgw >= 40) { cout << "¡¡CRITICO!!"; }
			cout << "\n";
			cout << "\n";
		}
		tge = rand() % 5;
		dmgw = 1 + rand() % 50;

		if (vidag[2] > 0) {
			if (vidae[tge] <= 0) { if (vidae[0] <= 0 && vidae[1] <= 0 && vidae[2] <= 0 && vidae[3] <= 0 && vidae[4] <= 0) { cout << "han muerto todos los enemigos, ganan los peleadores" << "\n"; return 0; } while (vidae[tge] <= 0) { if (vidae[tge] <= 0) { tge = rand() % 5; } } }
			cout << "peleador 3 ataca a enemigo " << 1 + tge << " por " << dmgw << " de daño";
			vidae[tge] = vidae[tge] - dmgw;
			if (dmgw >= 40) { cout << "¡¡CRITICO!!"; }
			cout << "\n";
			cout << "\n";
		}

		if (vidae[0] <= 0 && vidae[1] <= 0 && vidae[2] <= 0 && vidae[3] <= 0 && vidae[4] <= 0)
		{
			cout << "han muerto todos los enemigos, ganan los peleadores" << "\n";
			return 0;
		}

		cout << "vida peleador 1: " << std::max(0, vidag[0]) << "           vida enemigo 1: " << std::max(0, vidae[0]) << "\n";
		cout << "vida peleador 2: " << std::max(0, vidag[1]) << "           vida enemigo 2: " << std::max(0, vidae[1]) << "\n";
		cout << "vida peleador 3: " << std::max(0, vidag[2]) << "           vida enemigo 3: " << std::max(0, vidae[2]) << "\n";
		                                         

		cout << "\n";

		system("pause");
		cout << "\n";

		//turno de los enemigos
		cout << "Turno de los enemigos \n";
		cout << "\n";

		dmgw = 1 + rand() % 50;
		dmge = 1 + rand() % 30;
		tgw = rand() % 3;
		tge = rand() % 5;

		if (vidae[0] > 0) {
			if (vidag[tgw] <= 0) { if (vidag[0] <= 0 && vidag[1] <= 0 && vidag[2] <= 0) { cout << "han muerto todos los peleadores,ganan los enemigos" << "\n"; return 0; } while (vidag[tgw] <= 0) { if (vidag[tgw] <= 0) { tgw = rand() % 3; } } }
			cout << "enemigo 1 ataca a peleador " << 1 + tgw << " por " << dmge << " de daño";
			if (dmge >= 20) { cout << "¡¡CRITICO!!"; }
			vidag[tgw] = vidag[tgw] - dmge;
			cout << "\n";
			cout << "\n";
		}
		dmge = 1 + rand() % 30;
		tgw = rand() % 3;
		if (vidae[1] > 0) {
			if (vidag[tgw] <= 0) { if (vidag[0] <= 0 && vidag[1] <= 0 && vidag[2] <= 0) { cout << "han muerto todos los peleadores,ganan los enemigos" << "\n"; return 0; } while (vidag[tgw] <= 0) { if (vidag[tgw] <= 0) { tgw = rand() % 3; } } }
			cout << "enemigo 2 ataca a peleador " << 1 + tgw << " por " << dmge << " de daño";
			if (dmge >= 20) { cout << "¡¡CRITICO!!"; }
			vidag[tgw] = vidag[tgw] - dmge;
			cout << "\n";
			cout << "\n";
		}
		dmge = 1 + rand() % 30;
		tgw = rand() % 3;
		if (vidae[2] > 0) {
			if (vidag[tgw] <= 0) { if (vidag[0] <= 0 && vidag[1] <= 0 && vidag[2] <= 0) { cout << "han muerto todos los peleadores,ganan los enemigos" << "\n"; return 0; } while (vidag[tgw] <= 0) { if (vidag[tgw] <= 0) { tgw = rand() % 3; } } }
			cout << "enemigo 3 ataca a peleador " << 1 + tgw << " por " << dmge << " de daño";
			if (dmge >= 20) { cout << "¡¡CRITICO!!"; }
			vidag[tgw] = vidag[tgw] - dmge;
			cout << "\n";
			cout << "\n";
		}
		
		dmge = 1 + rand() % 30;
		tgw = rand() % 3;

		if (vidag[0] <= 0 && vidag[1] <= 0 && vidag[2] <= 0)
		{
			cout << "han muerto todos los peleadores,ganan los enemigos" << "\n";
			return 0;
		}

		cout << "\n";

		cout << "vida peleador 1: " << std::max(0, vidag[0]) << "           vida enemigo 1: " << std::max(0, vidae[0]) << "\n";
		cout << "vida peleador 2: " << std::max(0, vidag[1]) << "           vida enemigo 2: " << std::max(0, vidae[1]) << "\n";
		cout << "vida peleador 3: " << std::max(0, vidag[2]) << "           vida enemigo 3: " << std::max(0, vidae[2]) << "\n";


		cout << "\n";
		system("pause");
	}


}



