/*
Exercicio 8
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;

public class Computador {

	public String nome;
	public String marca;
	private Data data;
	
	public Computador setNome(String nome) {
		this.nome = nome;
		return this;
	}
	
	public Data setMarca(String marca) {
		this.marca = marca;
		return this.data;
	}
	
	public Data getData() {
		return data;
	}
	
	public Computador() {
		data = new Data();
	}
	
	public String toString() {
		return "Nome: " + nome + "\nMarca: " + marca;
	}
}
