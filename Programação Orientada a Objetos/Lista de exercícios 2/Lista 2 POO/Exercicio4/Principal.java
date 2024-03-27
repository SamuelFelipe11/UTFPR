package lista;

import java.util.ArrayList;
import java.util.List;

public class Principal{
	private EmpresaViagem empresa;

    public Principal(){
    	List<IMoeda>lista = new ArrayList<>();
    	lista.add(new Real());
    	lista.add(new BitCoin());
    	lista.add(new Euro());
    	
    	for (IMoeda i : lista) {
    		System.out.println("Classe: " + i.getClass() + " \t|| Valor convertido: " + i.conversaoValor(10.0f));
    	}
    }


	public static void main(String [] args){
        new Principal();
	}


}