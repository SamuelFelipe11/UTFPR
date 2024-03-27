package lista;
public class Onibus extends Veiculo{
	private Integer qtdePassageiros;
	private String tipo;

	public Onibus(){

	}

	public Integer getQtdePassageiros() {
		return qtdePassageiros;
	}

	public void setQtdePassageiros(Integer qtdePassageiros) {
		this.qtdePassageiros = qtdePassageiros;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	
	public String localEmbarque(String local) {
		return local;
	}

	public Double taxaReagendarViagem(Float taxa, Float porcentagem) {
		return (double) ((taxa*porcentagem)/100);
	}

	public Double calculaAtraso(Float tempoRestante) {
		return tempoRestante + (tempoRestante*0.5);
	}

	public Integer quantidadeParadas(Integer paradas) {
		return paradas;
	}

	public String calculaClima(String tempo) {
		if (tempo == "dia")
			return "Ensolarado";
		else
			return "Chuvoso";
	}
}