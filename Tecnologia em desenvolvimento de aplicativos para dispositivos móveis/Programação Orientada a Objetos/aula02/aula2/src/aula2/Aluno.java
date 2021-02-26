package aula2;

public class Aluno {
	int matricula;
	String nome;
	String cpf;
		
	public Aluno(int matricula) {
		this.matricula = matricula;
		this.nome = "Vazio";
		this.cpf = "000.000.000-00";
	}

	Aluno(){
		System.out.println("Aluno criado sem parâmetros");
	}
	
	Aluno(int matricula, String nome, String cpf){
		this.matricula = matricula;
		this.nome = nome;
		this.cpf = cpf;
	}
	
	void info(){
		System.out.println("Matricula: " + matricula);
		System.out.println("Nome: " + nome);
		System.out.println("CPF: " + cpf);
		System.out.println();
	}
}
