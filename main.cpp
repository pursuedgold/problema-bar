#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string sexo;
	int cerv, refr, espeto;
	double couvert, consumo, total,ingresso ;
	cout << "Sexo: " << endl;
	cin >> sexo;
	
	cout << "Quantidade de cervejas: " << endl;	
	cin >> cerv;
	
	cout << "Quantidade de refrigerantes: " << endl;
	cin >> refr;
	
	
	cout << "Quantidade de espetinhos: " << endl;
	cin >> espeto;
	
	
	
	if (sexo == "F"){
    ingresso = 8.0;
}else {
    ingresso = 10.0;
}
	consumo = cerv * 5.0 + refr * 3.0 + espeto * 7.0;
	if (consumo > 30.0) {
    couvert = 0.0;
}else{
    couvert = 4.0;
}
	total = ingresso + consumo +couvert;
	cout << fixed << setprecision(2);
	cout << endl << "RELATORIO:" << endl;
	cout << "Consumo = R$ " << consumo << endl;
	if (couvert == 0.0){
    cout << "Isento de Couvert" << endl;

}else{
    cout << "Couvert = R$ " << couvert << endl;

}
cout << "Ingresso = R$" << ingresso << endl;
cout << endl << "Valor a pagar = R$ " << total << endl;

	return 0;
}
