package uninter;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import java.awt.Window;

import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JRadioButton;

public class TelaInicial extends JFrame {

	private JPanel contentPane;
	private JTextField nomeJogador;
	private JButton btnOk;
	
	private String jogador;
	

	/**
	 * Create the frame.
	 */
	public TelaInicial() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		setSize(600,600);//deixa a tela com valor de 600px por 600px
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);//deixa os componentes fixo na tela
		contentPane.setLayout(null);
		
		//deixa mensagem para usuário
		JLabel lblNewLabel = new JLabel("COLOQUE O NOME DO JOGADOR");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 30));
		lblNewLabel.setBounds(43, 96, 498, 55);
		contentPane.add(lblNewLabel);
		
		//caixa de texto onde o usuário vai colocar o nome do jogador
		nomeJogador = new JTextField();
		nomeJogador.setFont(new Font("Tahoma", Font.BOLD, 25));
		nomeJogador.setBounds(113, 190, 357, 46);
		contentPane.add(nomeJogador);
		nomeJogador.setColumns(10);
		
		//Botão OK
		btnOk = new JButton("OK");
		btnOk.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				jogador = nomeJogador.getText();
				
				//JOptionPane.showMessageDialog(null, jogador);
				
				Jogador jog = new Jogador();
				jog.nome = jogador;
				JOptionPane.showMessageDialog(null, jog);
				
					Tabuleiro tabuleiro = new Tabuleiro();
					tabuleiro.setVisible(true);
					dispose();
				
			}
		});
		btnOk.setFont(new Font("Tahoma", Font.BOLD, 18));
		btnOk.setBounds(230, 393, 123, 55);
		contentPane.add(btnOk);
		
		// RadioButton para escolher o nível de dificuldade
		JRadioButton rdbtnNewRadioButton = new JRadioButton("FACIL");
		rdbtnNewRadioButton.setFont(new Font("Tahoma", Font.BOLD, 25));
		rdbtnNewRadioButton.setBounds(62, 307, 109, 23);
		contentPane.add(rdbtnNewRadioButton);
		
		JRadioButton rdbtnNewRadioButton_1 = new JRadioButton("M\u00C9DIO");
		rdbtnNewRadioButton_1.setFont(new Font("Tahoma", Font.BOLD, 25));
		rdbtnNewRadioButton_1.setBounds(228, 307, 128, 23);
		contentPane.add(rdbtnNewRadioButton_1);
		
		JRadioButton rdbtnNewRadioButton_2 = new JRadioButton("DIFICIL");
		rdbtnNewRadioButton_2.setFont(new Font("Tahoma", Font.BOLD, 25));
		rdbtnNewRadioButton_2.setBounds(420, 307, 133, 23);
		contentPane.add(rdbtnNewRadioButton_2);
	}
}
