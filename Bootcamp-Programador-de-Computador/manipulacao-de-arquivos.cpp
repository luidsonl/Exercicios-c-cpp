#include <iostream>
#include <fstream>

using namespace std;

/*Funçaõ que testa se a palavra começa com um prefixo*/
bool startsWith(string word, string prefix) { // recebe parametros
    if (word.length() < prefix.length()) {// testa se a palavra é menor que o prefixo buscado e retorna falso caso seja
        return false;
    }
    return word.substr(0, prefix.length())/*Extrai a palavra do início até o tamanho do prefixo*/.compare(prefix) == 0 /*compare retorna 0 se as strings forem iguais*/;
}


void wordCounter(){
	
	ifstream file;
	
	string word, wordQuerier = "melhor";
	int counter = 0, queryCounter = 0; // Variáveis contadoras
	
	file.open("desafio_arq01.txt", ios::in);
	
	while(file>>word){
		counter ++;
		
		if (startsWith(word,wordQuerier)){
			
			cout<<word<<endl;
			queryCounter++;
		}
		
	}
	
	file.close();
	
	cout<< "O arquivo tem "<<counter<<" palavras"<<endl;
	cout<< "O arquivo tem "<<queryCounter<<" palavras que começam com '"<< wordQuerier<<"'"<<endl;
	
	
}

void questao10(){
	
	ifstream inFile;
	ofstream outFile;
	
	string palavra;
	

	inFile.open("desafio_arq01.txt", ios::in);
	outFile.open("desafio_arq03.txt", ios::out);
	
	while(inFile >> palavra){
		outFile << palavra << " ";
	}
	
	inFile.close();
	outFile.close();
	
}

int main(){
	//wordCounter();
	questao10();
	
	return 0;
}
