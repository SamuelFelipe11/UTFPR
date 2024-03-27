/*
Exercicio 8
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;
import java.util.Scanner;
public class Principal {
	private EmpresaViagem empresa;

	
	public Principal() {
		empresa = new EmpresaViagem();

	}
	
	public static void main(String[] args){
		Principal principal = new Principal();
		Scanner entrada = new Scanner(System.in);
		Computador c = new Computador();
		
		System.out.println("Digite os atributos da empresa!\n");
		
		System.out.println("Nome:");
		principal.empresa.setNome(entrada.next());
		
		System.out.println("Proprietario:");
		principal.empresa.setProprietario(entrada.next());
		
		System.out.println("Endereço:");
		principal.empresa.setEndereco(entrada.next());
		
		System.out.println("Vendas mensais:");
		principal.empresa.setVendasMensais(entrada.nextFloat());
		
		System.out.println("Quantidade máxima de passagens:");
		principal.empresa.setQtdeMaxPassagens(entrada.nextInt());
		
		System.out.println("Quantidade de funcionários:");
		principal.empresa.setQtdeFuncionarios(entrada.nextInt());

		System.out.println("\n\n== DADOS DA EMPRESA '" + principal.empresa.getNome()+ "' ==\n" + "\nProprietario: " + principal.empresa.getProprietario() + "\nEndereco: " + principal.empresa.getEndereco() + "\nVendas mensais: " + principal.empresa.getVendasMensais() + "\nQuantidade maxima de passagens: " + principal.empresa.getQtdeMaxPassagens() + "\nQuantidade de funcionarios: " + principal.empresa.getQtdeFuncionarios());
		  
		  
		
		
		c.setNome("Comp1").setMarca("Intel").setData(1, 1, 2001);
		
		
		System.out.println("\n\n== ATRIBUTOS DO COMPUTADOR ==\n" + c);
		System.out.println(c.getData());
		
		entrada.close();
	}
}
