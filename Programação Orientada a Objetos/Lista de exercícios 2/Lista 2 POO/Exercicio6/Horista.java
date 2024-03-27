package lista;

public class Horista extends Empregado{
	private int horas;
	
	public Horista(String nome, String sobrenome, Float salarioBase, int horas) {
		super(nome, sobrenome, salarioBase);
		this.horas = horas;		
	}
	public void ganhos() {
		System.out.println("Ganhos: " + (getSalarioBase() + horas*20) + "\n\n");
	}
	
	public void imprimir() {
		System.out.println("Nome: " + getNome() + " \nSobrenome: " + getSobrenome());
	}
}
