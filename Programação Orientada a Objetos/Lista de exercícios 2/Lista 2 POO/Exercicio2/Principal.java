package src;
public class Principal{
	private EmpresaViagem empresa;

    public Principal(){
    	empresa = new EmpresaViagem();
    	empresa.setOnibus(new Onibus());
    	System.out.println("Ônibus -----------------------------\n");
    	System.out.println(empresa.getOnibus().calcularPagamento(50.0f, 10.0f, 5.0f));
    	System.out.println(empresa.getOnibus().calcularTempoViagem(50, 3, 2, 1, 1));
    	System.out.println(empresa.getOnibus().emitirPassagem(5.0f));
    	System.out.println("------------------------------------\n\n");
    	
    	System.out.println("Barco ------------------------------\n");
    	empresa.setBarco(new Barco());
    	System.out.println(empresa.getBarco().calcularPagamento(200.0f, 10.0f, 5.0f));
    	System.out.println(empresa.getBarco().calcularTempoViagem(20, 3, 2, 1, 1));
    	System.out.println(empresa.getBarco().emitirPassagem(2000.0f));
       	System.out.println("------------------------------------\n\n");   	    	
    }


	public static void main(String [] args){
        new Principal();
	}


}