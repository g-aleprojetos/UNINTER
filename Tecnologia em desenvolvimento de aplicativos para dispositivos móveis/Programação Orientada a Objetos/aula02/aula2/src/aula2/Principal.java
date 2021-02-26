package aula2;

import java.util.ArrayList;

public class Principal {

	public static void main(String[] args) {
	
		Aluno a = new Aluno();
		a.matricula = 1001;
		a.nome = "Super Mario";
		a.cpf = "111222333";
		a.info();
		
		Aluno b = new Aluno(1002, "Super Luigi", "222.333.555-05");
		b.info();
		
		Aluno c = new Aluno(1003);
		c.info();
		
		ArrayList<Aluno> alunos = new ArrayList();
		alunos.add(c);
		alunos.add(new Aluno(1004, "Bowser", "666.777.888-99"));
		
		
		/*
		Turma nova = new Turma();
		nova.prof = new Professor();
		nova.prof.nome = "Leonardo";
		nova.alunos = new ArrayList();
		nova.alunos.add(new Aluno());
		nova.alunos.get(0).nome = "Super Mario";*/
				
	/*		
		Aluno a = new Aluno();
		a.matricula = 1001;
		a.nome = "Super Mario";
		a.cpf = "111222333";
		
		Aluno b = new Aluno();
		b.matricula = 1002;
		b.nome = "Yoshi";
		b.cpf = "777222555";
				
		a.info();
		
		a.nome = "Super Luigi";
		
		a.info();
		b.info();*/

	}

}
