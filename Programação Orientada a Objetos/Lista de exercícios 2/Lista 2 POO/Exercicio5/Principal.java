package lista;

import java.util.ArrayList;
import java.util.List;

public class Principal{
	private EmpresaViagem empresa;

	
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
		
		public interface IVeiculo{
			
			public abstract Float emitirPassagem(Float taxa);
			public abstract Float calcularPagamento(Float valorFixo, Float distancia, Float taxa);
			public abstract Double calcularTempoViagem(Integer valorFixo, Integer x1, Integer y1, Integer x2, Integer y2);

		}
		
		public class BitCoin implements IMoeda{


			public Float conversaoValor(Float valor) {

				return (float) (valor*2.3);
			}

		}
		
		public class Real implements IMoeda{


			public Float conversaoValor(Float valor) {
				
				return (float) (valor*1.7);
			}

		}

		public class Euro implements IMoeda{

			public Float conversaoValor(Float valor) {

				return (float) (valor*0.5);
			}

		}
		
		public interface IMoeda {
			public abstract Float conversaoValor(Float valor);
		}

		public class EmpresaViagem{
			private String nome;
			private String proprietario;
			private String endereco;
			private Float vendasMensais;
			private Integer qtdeMaxPassagens;
			private Integer qtdeFuncionarios;
			private Onibus onibus;
			private Barco barco;


			public String getNome() {
				return nome;
			}

			public void setNome(String nome) {
				this.nome = nome;
			}

			public String getProprietario() {
				return proprietario;
			}

			public void setProprietario(String proprietario) {
				this.proprietario = proprietario;
			}

			public String getEndereco() {
				return endereco;
			}

			public void setEndereco(String endereco) {
				this.endereco = endereco;
			}

			public Float getVendasMensais() {
				return vendasMensais;
			}

			public void setVendasMensais(Float vendasMensais) {
				this.vendasMensais = vendasMensais;
			}

			public Integer getQtdeMaxPassagens() {
				return qtdeMaxPassagens;
			}

			public void setQtdeMaxPassagens(Integer qtdeMaxPassagens) {
				this.qtdeMaxPassagens = qtdeMaxPassagens;
			}

			public Integer getQtdeFuncionarios() {
				return qtdeFuncionarios;
			}

			public void setQtdeFuncionarios(Integer qtdeFuncionarios) {
				this.qtdeFuncionarios = qtdeFuncionarios;
			}

			public Onibus getOnibus() {
				return onibus;
			}

			public void setOnibus(Onibus onibus) {
				this.onibus = onibus;
			}

			public Barco getBarco() {
				return barco;
			}

			public void setBarco(Barco barco) {
				this.barco = barco;
			}


			public EmpresaViagem(){
				
			}	

		}

    public Principal(){
    	List<IMoeda>lista = new ArrayList<>();
    	lista.add(new Real());
    	lista.add(new BitCoin());
    	lista.add(new Euro());
    	
    	for (IMoeda i : lista) {
    		System.out.println("Classe: " + i.getClass() + " \t|| Valor convertido: " + i.conversaoValor(10.0f));
    	}
    }


	public static void main(String [] args){
        new Principal();
	}


}