// @author: Diogo Branquinho - github: diogobranquinho

#include <stdio.h>
#include <Windows.h>

int main(VOID){
 STARTUPINFO si;
 PROCESS_INFORMATION pi;

// Alocando memória 
ZeroMemory(&si, sizeof(si));
 si.cb = sizeof(si);
 ZeroMemory(&pi, sizeof(pi));

// Criação de um processo-filho if (!CreateProcess(NULL,// Utilizando a linhade comando"C:\\WINDOWS\\system32\\calc.exe",// dir da calculadora do windows NULL,// Não realiza herança
 NULL,// Não tem herança de thread FALSE,// Desabilitar herança0,// Sem criação de flag (variavel de passagem) NULL,// Utilizar o bloco de código do p-pai NULL,// Utilizar o diretório existente do p-pai&si,&pi)){ fprintf(stderr,"Create Process Failed"); return -1;}// O P-pai só executa após a finalização do p-filho WaitForSingleObject(pi.hProcess, INFINITE); printf("Child Complete");// Fechando processos CloseHandle(pi.hProcess); CloseHandle(pi.hThread);}