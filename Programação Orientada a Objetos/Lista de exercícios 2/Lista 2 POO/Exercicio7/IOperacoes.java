package lista;

public interface IOperacoes {
	public abstract void setOperando1(float operando1); //Define o valor do primeiro operando
	public abstract void setOperando2(float operando2); //Define o valor do segundo operando
	public abstract Float getResultado(); //Retorna o resultado da operação
	public abstract String getNome(); //Retorna o nome da operação
	public abstract int getQuantidade(); //Retorna a quantidade de instâncias da classe
	
}
