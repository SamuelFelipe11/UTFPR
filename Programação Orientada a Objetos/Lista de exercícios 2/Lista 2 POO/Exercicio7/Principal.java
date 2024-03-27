package lista;

import java.util.ArrayList;
import java.util.List;

public class Principal {
	public Principal() {
		List<IOperacoes>lista = new ArrayList<>();	
		lista.add(new Soma());
		lista.add(new Subtracao());
		lista.add(new Divisao());
		lista.add(new Multiplicacao());
		
		for(IOperacoes op : lista) {
			op.setOperando1(2);
			op.setOperando2(5);
			System.out.println(op.getNome() + ": " + op.getResultado() + " Quantidade de instancias:" + op.getQuantidade());
		}
	}
	
	public static void main(String [] args) {
		new Principal();
	}
}
