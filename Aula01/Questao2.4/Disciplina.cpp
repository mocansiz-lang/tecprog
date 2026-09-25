#include "Disciplina.h"
#include <stdio.h>
#include <string.h>

Disciplina::Disciplina(int na, char* ac)
{
    Uni = NULL;
    Associadept = NULL;

    pAlunoPrim = NULL;
    pAlunoAtual = NULL;

    pProx = NULL;
    pAnte = NULL;

    cont_alunos = 0;
    numero_alunos = na;

    strcpy(Discipli, ac);
}

Disciplina::~Disciplina()
{
    Uni = NULL;
    Associadept = NULL;

    pAlunoPrim = NULL;
    pAlunoAtual = NULL;

    pProx = NULL;
    pAnte = NULL;
}

void Disciplina::setNome(char* n)
{
    strcpy(Discipli, n);
}

char* Disciplina::getNome()
{
    return Discipli;
}

void Disciplina::setDepartamento(Departamento* pdpto)
{
    Associadept = pdpto;
    pdpto->incluaDisciplina(this);
}

void Disciplina::incluaAluno(Aluno* pa)
{
    if (pAlunoPrim == NULL)
    {
        pAlunoPrim = pa;
        pAlunoAtual = pa;
    }
    else
    {
        pAlunoAtual->pProx = pa;
        pa->pAnte = pAlunoAtual;
        pAlunoAtual = pa;
    }

    cont_alunos++;
}

void Disciplina::listeAlunos()
{
    Aluno* paux = pAlunoPrim;

    while (paux != NULL)
    {
        printf("RA: %d\n", paux->getRA());
        paux = paux->pProx;
    }
}

void Disciplina::listeAlunos2()
{
    Aluno* paux = pAlunoAtual;

    while (paux != NULL)
    {
        printf("RA: %d\n", paux->getRA());
        paux = paux->pAnte;
    }
}
