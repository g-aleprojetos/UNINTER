package empresa;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		System.out.print("Digite seu palpite: ");
		
		int palpite = teclado.nextInt();
		String msg;
		
		while(palpite!= 10000) {
			
			msg = palpite<1000?"Um pouco mais...":"Um pouco menos...";//operador tern�rio
			System.out.println(msg);
			/*
			if(palpite <10000) {
				System.out.println("Um pouco mais...");
			}else {
				System.out.println("Um pouco menos...");
			}*/
			System.out.print("Digite seu pr�ximo palpite: ");
			palpite = teclado.nextInt();
		}
		
		System.out.println("Est� correto!!!");
		

	}

}
