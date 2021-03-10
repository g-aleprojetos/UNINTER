package uninter;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;

public class Principal {

	public static void main(String[] args) {
		
		/*
		Horario aula = new Horario();
		
		aula.setHora (40);*/
		/*
		ArrayList<String> pessoas = new ArrayList();
		//LinkedList<String> pessoas = new LinkedList();
		
		
		pessoas.add("Mario");
		pessoas.add("Luigi");
		pessoas.add("Peach");
		pessoas.add("Yoshi");
		
		//System.out.println(pessoas.get(0));
		//pessoas.remove(0);
		
		System.out.println("Ordem original");
		System.out.println(pessoas);
		System.out.println();
		
		Collections.sort(pessoas);
		System.out.println("Ordem alfabetica");
		System.out.println(pessoas);
		System.out.println();
		
		Collections.reverse(pessoas);
		System.out.println("Ordem inversa");
		System.out.println(pessoas);
		System.out.println();
		
		Collections.shuffle(pessoas);
		System.out.println("Após shuffle");
		System.out.println(pessoas);
		System.out.println();
		
		System.out.println(Collections.min(pessoas));
		System.out.println(Collections.max(pessoas));*/
		
	/*	
	HashMap<String, String> capitais = new HashMap();
		
		capitais.put("Brasil", "Brasília");
		capitais.put("Argentina", "Buenos Aires");
		capitais.put("Paraguai", "Assunção");
		capitais.put("Uruguai", "Montevidéu");
		
		System.out.println(capitais);
		System.out.println(capitais.get("Uruguai"));*/
		
		/*
		ArrayList<Integer> lista = new ArrayList();
		HashSet<Integer> conjunto = new HashSet();
		HashMap<String, Integer> mapa = new HashMap();
		
		int soma = 0;
		
		for(int i = 0; i <lista.size(); i++) {
			soma += lista.get(i);
		}
		
		soma = 0;
		
		for(int item : lista) {
			soma += item;
		}
		
		soma = 0;
		//Iterator it = mapa.entrySet().iterator();
		//Iterator it = conjunto.iterator();
		Iterator it = lista.iterator();
		
		while(it.hasNext()) {
			soma += (int)it.next();
		}*/
		
		LocalDate dataHoje = LocalDate.now();
		
		System.out.println(dataHoje);
		DateTimeFormatter formatador = DateTimeFormatter.ofPattern("dd/MM/yyyy - EEEE");
		System.out.println(dataHoje.format(formatador));
		
	}
}
