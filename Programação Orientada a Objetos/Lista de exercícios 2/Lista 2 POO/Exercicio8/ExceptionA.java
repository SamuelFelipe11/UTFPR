package lista;

public class ExceptionA extends Exception{
	public ExceptionA (String mensagem) {
		super("Capturado na ExceptionA: " + mensagem);

	}
}
