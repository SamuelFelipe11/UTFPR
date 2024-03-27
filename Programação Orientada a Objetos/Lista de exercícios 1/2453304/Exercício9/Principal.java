/*
Exercicio 9
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
		Garcia subclasse = new Garcia();
		Leito subclasse2 = new Leito();
		
		System.out.println("== SUBCLASSE 1 ==\nNome: " + subclasse.getNome() + "\nProprietário: " + subclasse.getProprietario() + "\nEndereço: " + subclasse.getEndereco() + "\nVendas Mensais: " + subclasse.getVendasMensais() + "\nQuantidade máxima de passagens: " + subclasse.getQtdeMaxPassagens() + "\nQuantidade de funcionários: "+ subclasse.getQtdeFuncionarios());
		System.out.println("\n\n\n\n== SUBCLASSE 2 ==\nTipo: " + subclasse2.getTipo() + "\nQuantidade de passageiros: "  + subclasse2.getQtdePassageiros());
	}
}
