package lista;
public class Barco extends Veiculo{
	private Integer qtdeCadeiras;
	private Integer qtdeMesas;
	
	public Integer getQtdeCadeiras() {
		return qtdeCadeiras;
	}
	public void setQtdeCadeiras(Integer qtdeCadeiras) {
		this.qtdeCadeiras = qtdeCadeiras;
	}
	public Integer getQtdeMesas() {
		return qtdeMesas;
	}
	public void setQtdeMesas(Integer qtdeMesas) {
		this.qtdeMesas = qtdeMesas;
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