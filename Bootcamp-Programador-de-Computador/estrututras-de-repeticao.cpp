#include <iostream>

using namespace std;

/*Faça um programa que leia números reais maiores que zero. Quando for informado o número zero, o programa deverá apresentar quantos
 * números foram informados e a média destes*/
void loopNumerosMedia(){
	
	float numero, soma = 0, media;
	int contador = 0;
	bool ativo = true;
	
	
	cout<<"Informe números maiores que 0, para finalizar digite 0"<<endl; // endl faz a mesma coisa que "\n"
	while (ativo){
		cin >> numero;
		
		
		if (numero <= 0){
			ativo = false;
		} else{
			soma += numero; // Igual soma = soma + numero
			contador ++;
		}
	}
	
	media = soma/contador;
	
	cout<<"Foram informados "<< contador<< " números, a soma deles é "<< soma <<" e a média é "<< media;		
}

/*Faça um programa que simule uma urna eletrônica.
*A tela a ser apresentada deverá ser da seguinte forma.

*As opcoes são:
*1. Candidato Edinaldo Pereira
*2. Candidato Manoel Gomes
*3. Candidato Marcos Jeeves
*4. NULO
*5. Branco
*Entre com o seu voto:
*
*O programa deverá Ler os votos dos eleitores e, quando for entrado o número 6, apresentar as seguintesinformações.
*a) O número de votos de cada candidato;
*b) A porcentagem de votos nulos;
*c) A porcentagem de votos brancos;
*d) O candidato vencedor.*/

void urnaEletronica(){
	int voto;
	float pEdinaldo, pManoel,pMarcos, pNulo, pBranco, edinaldo = 0, manoel = 0, marcos = 0, nulo = 0, branco = 0, total = 0;
	bool running = true;
	string vencedor;
	
	while (running){
		cout<<"Informe seu voto, digite:"<<endl;
		cout<<"1. Candidato Edinaldo Pereira"<<endl;
		cout<<"2. Candidato Manoel Gomes"<<endl;
		cout<<"3. Candidato Marcos Jeeves"<<endl;
		cout<<"4. Nulo"<<endl;
		cout<<"5. Branco"<<endl;
		cout<<"6. Para Encerrar"<<endl;
		cin>> voto;
		
		switch(voto){
			case 1: edinaldo ++; break;
			case 2: manoel ++; break;
			case 3: marcos ++; break;
			case 4: nulo ++; break;
			case 5: branco ++; break;
			case 6: running = false; break;
			default: nulo ++; // Anula o voto caso seja informada uma upção inválida
		}
	}
	total = edinaldo + manoel + marcos + nulo + branco;
	
	//Pega o percentual
	pEdinaldo = edinaldo*100 / total;
	pManoel = manoel*100 / total;
	pMarcos = marcos*100/total;
	pNulo = nulo *100/total;
	pBranco = branco * 100 / total;
	
	
	//Calcula Vencedor
	if (edinaldo > manoel && edinaldo > marcos){
		vencedor = "Edinaldo Pereira";
	}else if (manoel > edinaldo && manoel > marcos){
		vencedor = "Manoel Gomes";
	}else if (marcos > edinaldo && marcos > manoel){
		vencedor = "Marcos Jeeves";
	} else{
		vencedor = "Empate";
	}
	
	
	cout<<"-----------Resultados--------"<<endl;
	
	cout<<"1. Candidato Edinaldo Pereira: "<<edinaldo<<"-------"<<pEdinaldo<<"%"<<endl;
	cout<<"2. Candidato Manoel Gomes: "<<manoel<<"-------"<<pManoel<<"%"<<endl;
	cout<<"3. Candidato Marcos Jeeves: "<<marcos<<"-------"<<pMarcos<<"%"<<endl;
	cout<<"4. NULO: "<<nulo<<"-------"<<pNulo<<"%"<<endl;
	cout<<"5. Branco: "<<branco<<"-------"<<pBranco<<"%"<<endl;
	cout<<"Vencedor: "<<vencedor<<endl;
	
}

/*Faça um programa que peça uma nota, entre zero e dez.
 * Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido*/
 
 void avaliacao(){
	int nota;
	
	cout<<"Deixe uma nota de 0 a 10 como avaliação"<<endl;
	cin>> nota;
	
	while (nota<0 || nota>10){
	
	cout<<"Nota inválida"<<endl;
	cout<<"Deixe uma nota de 0 a 10 como avaliação"<<endl;
	cin>> nota;
	}
	cout<<"Obrigado pela avaliação!"<<endl;
}

/*Faça um progama que some automaticamente os números de 1 até 100*/

void while1a100(){
	int soma = 0, i = 1;
	
	while (i<=100){
		soma +=i;
		i++;
	}
	
	cout<<"A soma de todos os números de 1 a 100 é igual a "<<soma<<endl;
}

void PA1a100(){// S = n*(a1 + an)/2
	int soma = 100* (1 + 100)/2;
	cout<<"A soma de todos os números de 1 a 100 é igual a "<<soma<<endl;
}

/*Faça um programa que recebe dois números inteiros e gera os números inteiros que estão no intervalo entre eles*/
void whileIntervalo(){
	int num1, num2, inicio, fim, count;
	
	cout <<"Informe um número inteiro:"<<endl;
	cin >>num1;
	
	cout <<"Informe outro número inteiro:"<<endl;
	cin >> num2;
	
	// irá definir qual é o número inicial e qual é o final
	if (num1 <num2){
		inicio = num1;
		fim = num2;
	}else{
		inicio = num2;
		fim = num1;
	}
	
	cout <<"Os números inteiros no intervalo entre "<<inicio <<" e "<< fim<< " são "<< endl;
	
	count = inicio;
	while (count <= fim){
		cout << count<< endl;
		count ++;
	}	
}

/*Faça um progama que leia os dados de folhas de pagamento de uma empresa com 3 departamentos. Cada departamento possui 3 funcionários.
 * O programa deverá ler o nome do departamento, bem como o salário de cada funcionário do departamento.
 * deve exibir a folha salarial de cada departamento, a folha da empresa toda, bem como a média salarial da empresa toda*/
 
 void folhaPagamento(){
	 
	int nD = 2; //Número de departamentos
	int nF = 3; //Número de funcionários por departamento
	//Isso torna a manutenção mais fácil
	 
	string nome[nD];// Cria um array com 3 strings para o nome dos departamentos
	float salario[nD][nF]; // Cria um array com 3 arrays com 3 floats para o salario dos funcionários
	float somaDepartamento[nD], somaTotal = 0, mediaDepartamento[nD], mediaTotal = 0;
	
	cout<<"Cadastro de "<<nD<<" departamentos com "<<nF<<" funcionários:"<<endl;
		
	for (int i = 0; i < nD; i++){// fiz essa parte usando o for
		
		cout<<"Informe o nome do "<<i +1<< "º departamento:"<<endl;
		cin>> nome[i];
		
		for (int j = 0; j < nF; j++){
			
			cout<<"Informe o salário do "<< j+1 <<"º funcionário"<<endl;
			cin >> salario[i][j];
			
		}
		cout<<"----------------------"<<endl;
	}
	
	
	// Fiz essa parte usando o while
	
	
	int i = 0;
	while (i < nD){
		
		cout<<"--------------------"<<endl;
		cout <<"Nome do departamento:"<<endl;
		cout << nome[i]<<endl;
		
		
		int j = 0;
		// Vai informar a folha de pagamento do departamento
		somaDepartamento[i] = 0;
		
		while (j < nF){
			somaDepartamento[i] += salario[i][j];
			j++;
			
		}
		somaTotal += somaDepartamento[i];
		
		cout<<"A folha de pagamento para este departamento é de: "<< somaDepartamento[i]<<" R$"<<endl;
		
		//Calcula a média do departamento
		mediaDepartamento[i] = somaDepartamento[i]/nF;
		cout<<"Média de salário neste departamento: "<< mediaDepartamento[i]<<" R$"<<endl;
		
		i++;
	}
	
	cout<<"------------------------"<<endl;
	cout<<"A folha de pagamento total da firma é de: "<< somaTotal<<" R$"<<endl;
	
	mediaTotal = somaTotal/(nD*nF);// divide a soma total pelo número total de funcionários
	cout<<"Média de salário na firma é de: "<< mediaTotal<<" R$"<<endl;

}

/*Faça um progama que some automaticamente os números de 1 até 100*/

void for1a100() {
	int soma = 0;
	
	for (int i = 1; i<=100; i++) {
		soma += i;
	}
	
	cout<<"A soma de todos os números de 1 a 100 é igual a "<<soma<<endl;
	
}
/*Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles*/
	
void forIntervalo(){
	int num1, num2, inicio, fim;
	
	cout <<"Informe um número inteiro:"<<endl;
	cin >>num1;
	
	cout <<"Informe outro número inteiro:"<<endl;
	cin >> num2;
	
	// irá definir qual é o número inicial e qual é o final
	if (num1 <num2){
		inicio = num1;
		fim = num2;
	}else{
		inicio = num2;
		fim = num1;
	}
	
	cout <<"Os números inteiros no intervalo entre "<<inicio <<" e "<< fim<< " são "<< endl;
	
	for (int i = inicio; i<= fim; i++){
		cout << i<< endl;
	}	
}

/*Faça um programa que leia 5 números informados pelo usuário e faça:
 * 1 - Imprima a soma
 * 2 - Imprima a média
 * 3 - Imprima o maior
 * 4 - Imprima o menor*/
 void cincoNumeros(){
	 float numero, soma, media, maior, menor;
	 
	 cout<<"Informe 5 números"<<endl;
	 
	 cin>> numero; // receberá o primeiro número
	 soma = numero;
	 maior = numero;
	 menor = numero;
	 for (int i = 1 ; i < 4; i++){
		cin>> numero; // receberá os números 
		if (numero > maior){
			maior = numero; 
		}
		if (numero < menor){
			menor = numero; 
		}
		
		soma += numero;
	}
	media = soma/5;
	
	cout<<"A soma é igual a "<<soma<<endl;
	cout<<"A média é igual a "<< media<<endl;
	cout <<"O maior número é "<< maior<<endl;
	cout <<"O menor número é "<< menor<<endl;
	
}
 
/*Qual é a teoria de Fibonacci?
 * É uma sequencia infinita que um número é igual a soma dos dois números anteriores a ele
 * 0,1,1,2,3,5,8,13...
 * Faça um programa que gere essa sequencia com n números e informe a soma dos termos*/
void fibonacci(){
	
	int tamanho, numeroAtual = 0, numeroAnterior, numeroAuxiliar, soma = 0;
	
	cout<< "Informe a quantidade de números da sequência"<<endl;
	cin>> tamanho;
	cout<< "Sequência"<<endl;
	
	for (int i = 1; i <= tamanho; i++){
		
		switch(i){
			case 1: numeroAtual = 0; break;
			case 2:	numeroAtual = 1; numeroAnterior = 0; break;
			case 3: numeroAtual = 1; numeroAnterior = 1; break;
			default: numeroAuxiliar = numeroAtual; numeroAtual += numeroAnterior; numeroAnterior = numeroAuxiliar;/*Ainda não descobri
			como faz uma cópia do endereço de memória, por isso usei uma variável auxiliar*/
		}
		
		soma += numeroAnterior;
		cout<< numeroAtual<<endl;
		
	}
	cout<<"Soma dos números:"<<soma<<endl;
	
}
 
 
 
// Função principal
int main(){
	//loopNumerosMedia();
	//urnaEletronica();
	//avaliacao();
	//while1a100();
	//PA1a100();
	//whileIntervalo();
	//folhaPagamento();
	//for1a100();
	//forIntervalo();
	//cincoNumeros();
	fibonacci();
	
	
	
	return 0;
}
