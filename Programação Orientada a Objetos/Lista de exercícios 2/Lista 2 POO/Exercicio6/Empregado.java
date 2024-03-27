package lista;
public abstract class Empregado {
	private String nome;
	private String sobrenome;
	private Float salarioBase;
	
	public Empregado(String nome, String sobrenome, Float salarioBase) {
		this.nome = nome;
		this.sobrenome = sobrenome;
		this.salarioBase = salarioBase;
	}
	
	public String getNome() {
		return nome;
	}
	
	public String getSobrenome() {
		return sobrenome;
	}
	
	public Float getSalarioBase() {
		return salarioBase;
	}
	
	public abstract void ganhos();
	
	public abstract void imprimir();
		
	
}
