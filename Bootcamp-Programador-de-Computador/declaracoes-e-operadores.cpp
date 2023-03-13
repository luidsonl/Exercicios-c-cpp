#include <iostream> // permite entrada e saída de dados


using namespace std; // declara o escopo. n precisa escrever std:: ao usar as funções


// declarando funções-----------------------------------------------------------------
void boasVindas(){
	//char* pergunta = "Como você se chama? \n"; // o "char" armazena apenas 1 caractere, o "char*" é equivalente a uma string

	string pergunta = "Como você se chama? \n";	// O compilador reclama do uso do char* por isso usei string
	
	char nome[20];// define que a variavel nome terá até 20 caracteres
	
	std::cout<<"Estruturas de progamação \n"; // o std:: define o escopo da função o \n indica salto de linha
	cout<<pergunta; // quando o namespace std já for declarado não é necessário informá-lo
	
	cin>> nome;
	
	cout<<"Olá "<<nome<<"!\n";
	
	cout<<"------------------------------------------------------\n";
}

void declaracao(){//Funções tipo void não geram retorno
	
	//declarando variáveis
	int tipoInt = 5.1111111111111111111; // vai pegar só o 5
	float tipoFloat = 5.111111111111111111111;
	double tipoDouble = 5.111111111111111111111;
	
	cout<<"variável int: "<< tipoInt<<"\n"; // o << funciona como uma concatenação de saídas
	cout<<"variável float: "<< tipoFloat<<"\n";
	cout<<"variável double: "<< tipoDouble<<"\n";
}

void entrada(){
	int numeroInformado;
	
	cout<<"Informe um número inteiro: ";
	cin>> numeroInformado;// cin>> vai armazenar o número informado na variável
	cout<< numeroInformado; 
	
}

//Operadores aritméticos

float soma(){
	float a, b; // è possível declara variáveis do mesmo tipo na mesma linha
	
	cout<< "soma de números:\n";
	cout<<"informe o primeiro número: \n";
	cin>>a;
	cout<<"informe o segundo número: \n";
	cin>>b;
	
	cout<<"O resultado da soma é: \n";
	return a + b;
	}
	
float subtracao(){
	float a, b; // è possível declara variáveis do mesmo tipo na mesma linha
	
	cout<< "subtração de números:\n";
	cout<<"informe o primeiro número: \n";
	cin>>a;
	cout<<"informe o segundo número: \n";
	cin>>b;
	
	cout<<"O resultado de "<<a<<"-"<<b<< " é: \n";
	return a - b;
}

float multiplicacao(){
	float a, b; // è possível declara variáveis do mesmo tipo na mesma linha
	
	cout<< "Multiplicação de números:\n";
	cout<<"informe o primeiro número: \n";
	cin>>a;
	cout<<"informe o segundo número: \n";
	cin>>b;
	
	cout<<"O resultado de "<<a<<" x "<<b<< " é: \n";
	return a * b;
}

float divisao(){
	float a, b; // è possível declara variáveis do mesmo tipo na mesma linha
	
	cout<< "Divisão de números:\n";
	cout<<"informe o primeiro número: \n";
	cin>>a;
	cout<<"informe o segundo número: \n";
	cin>>b;
	
	cout<<"O resultado de "<<a<<" dividido por "<<b<< " é: \n";
	return a / b;
}

float media3(){// vai retornar a média de 3 números
	float a, b, c ,media;
	
	cout<< "Média de três números:\n";
	cout<<"informe o primeiro número: \n";
	cin>>a;
	cout<<"informe o segundo número: \n";
	cin>>b;
	cout<<"informe o terceiro número: \n";
	cin>>c;
	
	cout<<"A média de '"<<a<<"','"<<b<<"' e '"<<c << "' é: \n";
	media = (a+b+c)/3;
	
	return media;
	
}

int modulo(){
	int a, b; // o operador % só é aplicável para números inteiros
	
	cout<< "Módulo:\n";
	cout<<"informe o primeiro número: \n";
	cin>>a;
	cout<<"informe o segundo número: \n";
	cin>>b;
	
	cout<<"O resto da divisão de "<<a<<" por "<<b<< " é: \n";
	return (a%b);

}

float calcularImc(){
	float altura, peso, imc;
	
	cout<< "Cálculo de IMC \n";
	cout<<"informe sua altura em cm: \n";
	cin>>altura;
	cout<<"informe seu peso em Kg: \n";
	cin>>peso;
	
	altura = (altura/100);// converte altura de cm para metros
	
	imc = peso/(altura*altura);
	
	cout<<"O seu IMC é de: \n";
	return (imc);

}

// essa é a função principal do programa------------------------------------------------
int main(){
	
	// Chamada das funções
	
	boasVindas();
	//declaracao();
	//entrada();	
	//cout<<soma();
	//cout<<subtracao();
	//cout<<multiplicacao();
	//cout<<divisao();
	//cout<<media3();
	//cout<< modulo();;
	cout<< calcularImc();
	
	
	return 0; // encerra o programa
}

