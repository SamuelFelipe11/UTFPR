package lista;
import java.util.List;
import java.util.ArrayList;
public class Principal{
	private EmpresaViagem empresa;

    public Principal(){
    	empresa = new EmpresaViagem();
    	empresa.setBarco(new Barco());
    	empresa.setOnibus(new Onibus());
    	
    	
        List<Veiculo> lista = new ArrayList<>();
        
        Onibus onibus = new Onibus();
        onibus.setTipo("Leito");
        onibus.setNome("Jacana");
        onibus.setQtdePassageiros(15);
        lista.add(onibus);
        
        Barco barco = new Barco();
        barco.setNome("Barquinho");
        barco.setQtdeCadeiras(12);
        barco.setQtdeMesas(6);
        lista.add(barco);
        
        onibus = (Onibus) lista.get(0);
        barco = (Barco) lista.get(1);
        
        System.out.println("\tClasse: " + onibus.getClass() + "\t || Nome: " + onibus.getNome() + "\t || Tipo: " + onibus.getTipo() + "\t || Quantidade de passageiros: " + onibus.getQtdePassageiros());
        System.out.println("\n\tClasse: " + barco.getClass() + "\t || Nome: " + barco.getNome() + "\t || Quantidade de cadeiras: " + barco.getQtdeCadeiras() + "\t || Quantidade de mesas: " + barco.getQtdeMesas());
    }


	public static void main(String [] args){
        new Principal();
	}


}