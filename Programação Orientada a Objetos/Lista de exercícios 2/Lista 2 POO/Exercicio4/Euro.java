package lista;

public class Euro implements IMoeda{

	public Float conversaoValor(Float valor) {

		return (float) (valor*0.5);
	}

}
