/*
Exercicio 6
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;

public class EstacionamentoClientes {
	public String tipo;
	public String placa;
	
	public int horaSaida;
	public int minutoSaida;
	public int segundoSaida;
	
	public int horaEntrada;
	public int minutoEntrada;
	public int segundoEntrada;
	
	public EstacionamentoClientes() {
		
	}

	public Float valorEstacionamento() {
		
		int totalEntrada = (horaEntrada*3600)+(minutoEntrada*60)+segundoEntrada;
		int totalSaida = (horaSaida*3600)+(minutoSaida*60)+segundoSaida;
		
		if((totalSaida - totalEntrada) < 0) {
			System.out.println("Entrada de dados inválida!\n");
		}else if((totalSaida - totalEntrada) <=1800) {
			return 0.f;
		}else if((totalSaida - totalEntrada) <=3600) {
			return 10.f;
		}else {
			return 20.f;
		}
		
		return 0.f;
	}
	
	
	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public String getPlaca() {
		return placa;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public int getHoraSaida() {
		return horaSaida;
	}

	public void setHoraSaida(int horaSaida) {
		this.horaSaida = horaSaida;
	}

	public int getMinutoSaida() {
		return minutoSaida;
	}

	public void setMinutoSaida(int minutoSaida) {
		this.minutoSaida = minutoSaida;
	}

	public int getSegundoSaida() {
		return segundoSaida;
	}

	public void setSegundoSaida(int segundoSaida) {
		this.segundoSaida = segundoSaida;
	}

	public int getHoraEntrada() {
		return horaEntrada;
	}

	public void setHoraEntrada(int horaEntrada) {
		this.horaEntrada = horaEntrada;
	}

	public int getMinutoEntrada() {
		return minutoEntrada;
	}

	public void setMinutoEntrada(int minutoEntrada) {
		this.minutoEntrada = minutoEntrada;
	}

	public int getSegundoEntrada() {
		return segundoEntrada;
	}

	public void setSegundoEntrada(int segundoEntrada) {
		this.segundoEntrada = segundoEntrada;
	}
	
	
}
