/*
Exercicio 7
Autor(es): Samuel Felipe Córdova Victório
Data: 04/09/2023
*/
package src;
import java.util.Random;
public class Descobrir {

	
	public int premiado(int qtdeMaxFuncionarios) {
		Random gerador = new Random();
		return gerador.nextInt(qtdeMaxFuncionarios + 1);
	}
	
}
