/*
Exercicio 2
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;

public class EmpresaViagem {

	public String nome;
	public String proprietario;
	public String endereco;
	public Float vendasMensais;
	public int qtdeMaxPassagens;
	public int qtdeFuncionarios;
    private Onibus onibus;
	
	public EmpresaViagem() {
		nome = "";
		proprietario = "";
		endereco = "";
		vendasMensais = 0.f;
		qtdeMaxPassagens = 0;
		qtdeFuncionarios = 0;
	
		onibus = new Onibus();
	}
	
	public Onibus getOnibus() {
		return onibus;
	}
	public void setOnibus(Onibus onibus) {
		this.onibus = onibus;
	}
	
	public String getNome() {
		return nome;
	}
	
	public String getProprietario() {
		return proprietario;
	}
	
	public String getEndereco() {
		return endereco;
	}
	
	public Float getVendasMensais() {
		return vendasMensais;
	}
	
	public int getQtdeMaxPassagens() {
		return qtdeMaxPassagens;
	}
	
	public int getQtdeFuncionarios() {
		return qtdeFuncionarios;
	}
	
	public void setNome(String nome) {
		this.nome= nome;
	}
	
	public void setProprietario(String proprietario) {
		this.proprietario = proprietario;
	}
	
	public void setEndereco(String endereco) {
		this.endereco= endereco;
	}
	
	public void setVendasMensais(Float vendasMensais) {
		this.vendasMensais = vendasMensais;
	}
	
	public void setQtdeMaxPassagens(int qtdeMaxPassagens) {
		this.qtdeMaxPassagens = qtdeMaxPassagens;
	}
	
	public void setQtdeFuncionarios(int qtdeFuncionarios) {
		this.qtdeFuncionarios = qtdeFuncionarios;
	}
}
