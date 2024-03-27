package lista;
public class Principal{
	private EmpresaViagem empresa;

    public Principal(){
    	empresa = new EmpresaViagem();
    	empresa.setOnibus(new Onibus());
    	System.out.println("Ônibus -----------------------------\n");
    	System.out.println("Local de embarque: " + empresa.getOnibus().localEmbarque("Apucarana"));
    	System.out.println("Taxa de reagendamento da viagem: " +empresa.getOnibus().taxaReagendarViagem(5.0f, 10.0f));
    	System.out.println("Tempo de atraso: " + empresa.getOnibus().calculaAtraso(2.0f) + "h");
    	System.out.println("Quantidade de paradas: " + empresa.getOnibus().quantidadeParadas(5));
    	System.out.println("Clima: " + empresa.getOnibus().calculaClima("dia"));
    	System.out.println("------------------------------------\n\n");
    	
    	System.out.println("Barco ------------------------------\n");
    	empresa.setBarco(new Barco());
    	System.out.println("Local de embarque: " + empresa.getBarco().localEmbarque("Balneario Camboriu"));
    	System.out.println("Taxa de reagendamento da viagem: " +empresa.getBarco().taxaReagendarViagem(2000.0f, 5.0f));
    	System.out.println("Tempo de atraso: " + empresa.getBarco().calculaAtraso(9.0f) + "h");
    	System.out.println("Quantidade de paradas: " + empresa.getBarco().quantidadeParadas(2));
    	System.out.println("Clima: " + empresa.getBarco().calculaClima("noite"));
       	System.out.println("------------------------------------\n\n");   	    	
    }


	public static void main(String [] args){
        new Principal();
	}


}