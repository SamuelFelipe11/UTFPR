/*
Exercicio 6
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;
public class Principal {
	private EstacionamentoClientes estacionamento;
	
	public Principal() {
		estacionamento = new EstacionamentoClientes();

	}
	
	public static void main(String[] args){
		Principal principal = new Principal();
		principal.estacionamento.setTipo("Sedan");
		principal.estacionamento.setPlaca("ABC123");
		principal.estacionamento.setHoraEntrada(12);
		principal.estacionamento.setMinutoEntrada(40);
		principal.estacionamento.setSegundoEntrada(40);
		principal.estacionamento.setHoraSaida(13);
		principal.estacionamento.setMinutoSaida(20);
		principal.estacionamento.setSegundoSaida(20);
		
		System.out.println("Valor a ser pago: R$"+ principal.estacionamento.valorEstacionamento());
		
	}
}
