package uninter;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.EventQueue;
import java.awt.Font;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.SwingConstants;
import javax.swing.border.EmptyBorder;
import java.awt.GridLayout;
import java.awt.GridBagLayout;

public class Tabuleiro extends JFrame {
	
	
	
	Bloco[] blocos = new Bloco[9];// cria os blocos onde vai ficar os botões do jogo

	/**
	 * Create the frame.
	 */
	public Tabuleiro() {
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		setSize(600,600);
		
		//informa quem é a vez de jogar
		JLabel infJoga = new JLabel("Jogador");// label para informar quem esta jogando
		infJoga.setForeground(new Color(50, 205, 50));
		infJoga.setFont(new Font("Tahoma", Font.BOLD, 35));
		infJoga.setHorizontalAlignment(SwingConstants.CENTER);
		getContentPane().add(infJoga, BorderLayout.NORTH);
		
		//painel do tabuleiro
		JPanel tTela = new JPanel();
		tTela.setBackground(new Color(0, 0, 0));
		getContentPane().add(tTela, BorderLayout.CENTER);
		tTela.setLayout(new GridLayout(3, 3, 10, 10));//configura a tela em grade de 3 X 3

		//icrementa os blocos na tela que é um botão
		for(int i=0; i<9; i++) {
			Bloco bloco = new Bloco();
			blocos[i] = bloco;
			tTela.add(bloco);
		}	
   	
	}
	
	public class Bloco extends JButton{
		
		int quem = 0;
		public Bloco() {
			setBackground(Color.white);
		}
		
	}

}














