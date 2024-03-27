package lista;

public class Multiplicacao implements IOperacoes{
	private Float operando1;
	private Float operando2;
	public void setOperando1(float operando1) {
		this.operando1 = operando1;		
	}

	public void setOperando2(float operando2) {
		this.operando2 = operando2;
	}
	

	public Float getResultado() {
		
		return operando1 * operando2;
	}

	public String getNome() {

		return "Multiplicacao";
	}

	public int getQuantidade() {
		return 4;
	}
}
