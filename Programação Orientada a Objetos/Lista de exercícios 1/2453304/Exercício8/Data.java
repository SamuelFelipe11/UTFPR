/*
Exercicio 8
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;

public class Data {
	int dia, mes, ano;
	
	public void setData(int dia, int mes, int ano) {
		this.dia = dia;
		this.mes = mes;
		this.ano = ano;
	}
	
	public Data() {
		
	}
	
	public String toString() {
		return dia +"/" + mes + "/" + ano;
	}
}
