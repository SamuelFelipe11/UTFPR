package lista;
public class Veiculo implements IVeiculo{
	private String nome;

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public Float emitirPassagem(Float taxa){
		return taxa;
	}


	public Float calcularPagamento(Float valorFixo, Float distancia, Float taxa){
		return (valorFixo*distancia) + taxa;
	}

	public void calcularTempoViagem(Integer valorFixo, Integer x1, Integer y1, Integer x2, Integer y2){
		return valorFixo * ()
	}

}