package lista;

import java.util.ArrayList;
import java.util.List;

public class Principal {
	public Principal() {
		List<Empregado>lista = new ArrayList<>();
		
		Bonificado b1 = new Bonificado("Joao","Silva", 1200.0f, 150.0f, 400.0f);
		Comissionado c1 = new Comissionado("Maria","Soares", 1000.0f, 25.0f);
		Horista h1 = new Horista("Jomar","Silva Soares", 900.0f, 15);
		
		lista.add(b1);
		lista.add(c1);
		lista.add(h1);
	
		for ( Empregado emp : lista ) {
			emp.imprimir();
			emp.ganhos();
		}
	
	}
	
	public static void main(String [] args) {
		new Principal();
	}
}
