package lista;

public class Comissionado extends Empregado{
	private Float taxaComissao;
	
	public Comissionado(String nome, String sobrenome, Float salarioBase, Float taxaComissao) {
		super(nome, sobrenome, salarioBase);
		this.taxaComissao = taxaComissao;		
	}
	
	public void ganhos() {
		System.out.println("Ganhos: " + (getSalarioBase() + ((getSalarioBase() * taxaComissao)/100)) + "\n\n");
	}
	
	public void imprimir() {
		System.out.println("Nome: " + getNome() + " \nSobrenome: " + getSobrenome());
	}
}
