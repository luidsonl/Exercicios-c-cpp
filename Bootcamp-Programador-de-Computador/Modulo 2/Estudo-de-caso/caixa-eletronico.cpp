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
 
 bool startsWith(string word, string prefix) { // recebe parametros
    if (word.length() < prefix.length()) {// testa se a palavra é menor que o prefixo buscado e retorna falso caso seja
        return false;
    }
    return word.substr(0, prefix.length()).compare(prefix) == 0;//substr extrai a palavra do início até o tamanho do prefixo
    //compare retorna 0 se as strings forem iguais
}
 
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
	
	database<<"user:"<<conta<<" ";
	database.close();
	
}

void operacao(string conta, float valor){
	ifstream inFile;
	ofstream outFile;
	string data;
	
	inFile.open("database/db.txt");
	outFile.open("database/db_temp.txt");
	
	while(inFile >> data){
		outFile << data << " ";
		if(data == "user:"+conta){
			outFile << valor<< " ";
		}
	}
	inFile.close();
	outFile.close();
	remove("database/db.txt");
	rename("database/db_temp.txt", "database/db.txt");
	cout<<"Operação realizada!"<<endl<<endl;
}

bool saldoDisponivel(string conta, float valor){
	ifstream inFile;
	bool selecionado = false;
	string data;
	float saldoFinal = 0;
	
	inFile.open("database/db.txt");
	
	while(inFile >> data){
		if(data == "user:"+conta){
			selecionado = true;
			continue;
		}
		
		if (selecionado){
			if (startsWith(data, "user:")){
				selecionado = false;
				break;
			}
			saldoFinal +=stof(data);
		}
		
		
	}
	inFile.close();
	
	if (valor > saldoFinal){
		return false;
	}else{
		return true;
	}
}

void informarExtrato(string conta){
	ifstream inFile;
	bool selecionado = false;
	string data;
	float saldoFinal;
	
	inFile.open("database/db.txt");
	
	while(inFile >> data){
		if(data == "user:"+conta){
			selecionado = true;
			continue;
		}
		
		if (selecionado){
			if (startsWith(data, "user:")){
				selecionado = false;
				break;
			}
			cout<< data<<endl;
			saldoFinal +=stof(data);
		}
		
		
	}
	inFile.close();
	
	cout<<"Saldo final:"<<saldoFinal<<" R$"<<endl;
	cout<<"-----------------"<<endl;
}

void menuOpcoes(string conta){
	
	float valor;
	int opcao;
	
	while(true){
		cout<<"Informe a opção que deseja realizar"<<endl;
		cout<<"1 - Visualizar extrato"<<endl;
		cout<<"2 - Realizar depósito"<<endl;
		cout<<"3 - Realizar saque"<<endl;
		cout<<"0 - Sair"<<endl;
		cin>> opcao;
			
		if(opcao == 1){
			cout<<"----------------------------------"<<endl;
			cout<<"Informando o extrato da conta "<<conta<<endl;
			informarExtrato(conta);
			
		}else if(opcao == 2){
			cout<< "Informe a quantia do depósito"<<endl;
			cin>>valor;
			
			operacao(conta, valor);
			
		}else if (opcao == 3){
			cout<< "Informe a quantia do saque"<<endl;
			cin>>valor;
			
			if (saldoDisponivel(conta, valor)){
				valor = valor * -1;
				operacao(conta, valor);		
			} else{
				cout<<"Saldo insuficiente!"<<endl;
			}
			
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
		cout<<endl;
		
		if (opcao != 1){
			break;
		}
		
		cout<< "Informe o número da conta:"<<endl;
		cin>> conta;
		
		if (contaExistente(conta)){
			cout<<"Conta acessada"<<endl<<endl;
			
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
