#include <iostream>
#include <fstream>

using namespace std;
/*-------------Requisitos-------------------
 * Ao acessar inicialmente o ATM, o usuário deve experimentar a seguinte sequência de eventos:
 * 1 - A tela exibe uma mensagem de boas-vindas e solicita que o usuário insira o número da conta.
 * 2 - O usuário insere um número de conta de cinco dígitos utilizando o teclado numérico.
 * 3- A tela exibirá um menu para o usuário selecionar a operação desejada
 * 4- Funcionalidades: 
 * 	A - Exibir extrato e saldo
 * 	B - Realização de depósitos
 * 	C - Realização de saques
 * 	D - Sair
 * 5 - A informação deve ser armazenada em arquivos para poder ser recuperada após o encerramento*/
 
bool contaExistente(string conta){
	ifstream database;
	string data;
	
	database.open("database/db.txt");
	
	while(database>>data){
		if (data == "user:" + conta){
			database.close();
			return true;
		}
		
	}
	database.close();
	return false;
}

void criarConta(string conta){
	ofstream database;
	
	database.open("database/db.txt", ios::app);
	
	database<<"user:"<<conta<<"\n";
	database.close();
	
}

void depositar(){
	
}

void menuOpcoes(string conta){
	
	int opcao;
	
	while(true){
		cout<<"Informe a opção que deseja realizar"<<endl;
		cout<<"1 - Visualizar extrato"<<endl;
		cout<<"2 - Realizar depósito"<<endl;
		cout<<"3 - Realizar saque"<<endl;
		cout<<"0 - Sair"<<endl;
		cin>> opcao;
			
		if(opcao == 1){
			
		}else if(opcao == 2){
			
		}else if (opcao == 3){
			
		}else{
			cout<<"Operação encerrada"<<endl;
			cout<<"--------------------------------"<<endl;
			break;
				
		}
	}
	
}


void menuInicial(){
	
	string conta;
	int opcao;
	
	
	while(true){
		
		cout<< "O que deseja fazer?"<<endl;
		cout<< "1 - Acessar conta"<<endl;
		cout <<"0 - Sair"<<endl;
		cin >> opcao;
		
		if (opcao != 1){
			break;
		}
		
		cout<< "Informe o número da conta:"<<endl;
		cin>> conta;
		
		if (contaExistente(conta)){
			cout<<"Conta acessada"<<endl;
			
		}else{
			cout<<"A conta informada não existe, deseja criá-la?"<<endl;
			cout<<"1 - Sim"<<endl;
			cout<<"2 - Não"<<endl;
			cout<<"0 - Encerrar"<<endl;
			cin >> opcao;
			
			if (opcao == 1){
				criarConta(conta);
				cout<<"Conta '"<<conta<<"' criada."<<endl;
				
			}else if(opcao ==2){
				continue;
				
			}else{
				break;
			}
		}
		menuOpcoes(conta);
	}
	cout<<"--------------------------------"<<endl;
}


int main(){
	cout<<"Seja bem-vindo ao sistema de caixa eletrônico!"<<endl;
	menuInicial();
	
	
	cout<<"Volte sempre"<<endl;
	return 0;
}
