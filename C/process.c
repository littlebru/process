#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t pid;	//Declarando variavel do tipo pid_t

	// Criando uma cópia do processo
	pid = fork();

	// Condição para caso de erro

	if(pid <0){
		fprintf(stderr,"Fork failed");
		exit(-1);//Saida forçada do sistema
	}
	
	// Condição para processo filho
	else if (pid ==0){
		execlp("/bin/ls","ls", NULL);
	}
	
	//Condição para processo pai
	else {
		//O pai só executa após a finalização do filho
		wait(NULL);
		printf("Child Complete");
		exit(0);
	}
}
