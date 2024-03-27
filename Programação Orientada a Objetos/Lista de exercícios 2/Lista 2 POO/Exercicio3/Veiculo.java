package lista;
public abstract class Veiculo implements IVeiculo{
	private String nome;
	
	public abstract String localEmbarque(String local);
	public abstract Double taxaReagendarViagem(Float taxa, Float porcentagem);
	public abstract Double calculaAtraso(Float tempoRestante);
	public abstract Integer quantidadeParadas(Integer paradas);
	public abstract String calculaClima(String tempo);
	
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

	public Double calcularTempoViagem(Integer valorFixo, Integer x1, Integer y1, Integer x2, Integer y2){
		return valorFixo * (Math.sqrt((x1 - x2)^2 + (y1 - y2)^2));
	}

}