package lista;

public class Bonificado extends Assalariado{
	private Float bonificacao;
	
	public Bonificado(String nome, String sobrenome, Float salarioBase, Float bonificacao, Float salarioSemanal) {
		super(nome, sobrenome, salarioBase, salarioSemanal);
		this.bonificacao = bonificacao;	
	}
	
	public void ganhos() {
		System.out.println("Ganhos: " + (getSalarioBase() + bonificacao) + "\n\n");
	}
	
	public void imprimir() {
		System.out.println("Nome: " + getNome() + " \nSobrenome: " + getSobrenome());
	}
}
