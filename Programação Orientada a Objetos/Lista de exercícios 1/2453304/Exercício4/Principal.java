/*
Exercicio 4
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;
public class Principal {
	private EmpresaViagem empresa;
	private EmpresaViagem empresa2;
	
	public Principal() {
		empresa = new EmpresaViagem();
		empresa2 = new EmpresaViagem();
	}
	
	public static void main(String[] args){
		Principal principal = new Principal();
	
		
		principal.empresa.setNome("Garcia");
		principal.empresa.setProprietario("Samuel");
		principal.empresa.setEndereco("Curitiba");
		principal.empresa.setVendasMensais(105.f);
		principal.empresa.setQtdeMaxPassagens(12);
		principal.empresa.setQtdeFuncionarios(30);
		principal.empresa.setOnibus(new Onibus());
		principal.empresa.getOnibus().setQtdePassageiros(12);
		principal.empresa.getOnibus().setTipo("Leito");
		
		
		principal.empresa2.setNome("Gol");
		principal.empresa2.setProprietario("Samuel");
		principal.empresa2.setEndereco("Apucarana");
		principal.empresa2.setVendasMensais(112.f);
		principal.empresa2.setQtdeMaxPassagens(15);
		principal.empresa2.setQtdeFuncionarios(50);
		principal.empresa2.setOnibus(new Onibus());
		principal.empresa2.getOnibus().setQtdePassageiros(17);
		principal.empresa2.getOnibus().setTipo("Leitoo");
		System.out.println("NOME DA EMPRESA 1: " + principal.empresa.getNome() + "\nNOME DA EMPRESA 2: " + principal.empresa2.getNome()); 
	}
}
