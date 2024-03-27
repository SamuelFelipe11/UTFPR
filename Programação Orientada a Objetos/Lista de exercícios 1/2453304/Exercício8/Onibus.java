/*
Exercicio 8
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;
public class Onibus {
	private int qtdePassageiros;
	private String tipo;
	
	public  Onibus() {
		qtdePassageiros = 0;
		tipo = "";		
	}
	
	public int getQtdePassageiros() {
		return qtdePassageiros;
	}
	
	public String getTipo() {
		return tipo;
	}
	
	public void setQtdePassageiros(int qtdePassageiros) {
		this.qtdePassageiros = qtdePassageiros;
	}
	
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
}
