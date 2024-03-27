package lista;

public abstract class Assalariado extends Empregado{
	private Float salarioSemanal;
	public Assalariado(String nome, String sobrenome, Float salarioBase, Float salarioSemanal) {
		super(nome, sobrenome, salarioBase);
		this.salarioSemanal = salarioSemanal;		
	}
}
