package lista;
public class Principal{
	private EmpresaViagem empresa;

    public Principal(){
    	empresa = new EmpresaViagem();
    	empresa.setOnibus(new Onibus());
    	Onibus onibus = new Onibus();
    	onibus.calcularPagamento();
    	onibus.calcularTempoViagem();
    	onibus.calcularPagamento();
    }


	public static void main(String [] args){
        new Principal();
	}


}