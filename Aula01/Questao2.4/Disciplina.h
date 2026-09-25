#pragma once
#include "Aluno.h"
#include "Departamento.h"

class Disciplina
{
    private:
        char Discipli[150];
        Universidade *Uni;
        Departamento* Associadept;

        int numero_alunos;
        int cont_alunos;

        Aluno *pAlunoPrim;
        Aluno *pAlunoAtual;

    public:
        Disciplina(int na = 45, char* ac = "");
        ~Disciplina();

        Disciplina* pProx;
        Disciplina* pAnte;

        void setNome(char* n);
        char* getNome();

        void setDepartamento(Departamento* pdpto);

        void incluaAluno(Aluno* pa);
        void listeAlunos();
        void listeAlunos2();
};
