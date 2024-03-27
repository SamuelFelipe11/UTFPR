package src;
public class Calculadora {
	int campo1;
	int campo2;
	int operacao;
	String marca;
	String cor;
	Float tamanho;
	
	void setMarca(String marca) {
		this.marca = marca;
	}
	void setCor(String cor) {
		this.cor = cor;
	}
	void setTamanho(Float tamanho) {
		this.tamanho = tamanho;
	}
	void setCampo1(int campo1) {
		this.campo1 = campo1;
	}
	void setCampo2(int campo2) {
		this.campo2 = campo2;
	}
	int somar() {
		return this.campo1 + this.campo2;		
	}
	
	public String toString () {
		return "Marca - " + marca + "; " + "Cor - " + cor  + "; " + "Tamanho - "+ tamanho;
	}
	
}
