/*
Exercicio 2
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;
public class Principal {
	private EmpresaViagem empresa;
	
	public Principal() {
		empresa = new EmpresaViagem();
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
		
		System.out.println("ATRIBUTOS\n" + principal.empresa.getNome() + "\n" + principal.empresa.getProprietario() + "\n" + principal.empresa.getEndereco() + "\n" + principal.empresa.getVendasMensais() + "\n" + principal.empresa.getQtdeMaxPassagens() + "\n" +principal.empresa.getQtdeFuncionarios());
		
	}
}
