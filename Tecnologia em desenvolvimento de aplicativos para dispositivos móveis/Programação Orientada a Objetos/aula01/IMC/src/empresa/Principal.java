package empresa;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		System.out.print("Por favor digite seu peso (Kg): ");
		Scanner teclado = new Scanner (System.in);
		
		float peso = teclado.nextFloat();
		
		System.out.print("Digite sua altura (m) :");
		
		float altura = teclado.nextFloat();
		
		float imc = peso / (altura * altura);
		
		System.out.printf("Seu IMC eh: %.2f", imc);
	}

}
