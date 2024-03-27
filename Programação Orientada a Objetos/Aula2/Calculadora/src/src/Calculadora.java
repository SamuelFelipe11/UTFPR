package src;

import java.util.Scanner;

import javax.swing.JOptionPane;


public class Calculadora {
	
	public void somar() { //Sem interface, no terminal
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Digite o valor 1");
		String valor1 = entrada.next();
		int v1 = Integer.parseInt(valor1);
		
		System.out.println("Digite o valor 2");
		String valor2 = entrada.next();
		int v2 = Integer.parseInt(valor2);
		
		int soma = v1 + v2;
		System.out.print(soma);
	}
	
	
	public void somarGrafico() {
		JOptionPane entrada = new JOptionPane();
		String valor1 = entrada.showInputDialog(null, "Titulo", "Digite o valor 1");
		
		String valor2 = entrada.showInputDialog(null, "Titulo", "Digite o valor 2");
		
		int v1 = Integer.parseInt(valor1);
		int v2 = Integer.parseInt(valor2);
		int soma = v1+v2;
		
		entrada.showMessageDialog(null, "Resultado:"+soma, "Titulo", JOptionPane.INFORMATION_MESSAGE);
		
	}
	
	public void subtrairGrafico() {
		JOptionPane entrada = new JOptionPane();
		String valor1 = entrada.showInputDialog(null, "Titulo", "Digite o valor 1");
		
		String valor2 = entrada.showInputDialog(null, "Titulo", "Digite o valor 2");
		
		int v1 = Integer.parseInt(valor1);
		int v2 = Integer.parseInt(valor2);
		int subtracao = v1-v2;
		
		entrada.showMessageDialog(null, "Resultado:"+subtracao, "Titulo", JOptionPane.INFORMATION_MESSAGE);
		
	}

	public void multiplicarGrafico() {
		JOptionPane entrada = new JOptionPane();
		String valor1 = entrada.showInputDialog(null, "Titulo", "Digite o valor 1");
		
		String valor2 = entrada.showInputDialog(null, "Titulo", "Digite o valor 2");
		
		int v1 = Integer.parseInt(valor1);
		int v2 = Integer.parseInt(valor2);
		int multiplicacao = v1*v2;
		
		entrada.showMessageDialog(null, "Resultado:"+multiplicacao, "Titulo", JOptionPane.INFORMATION_MESSAGE);
		
	}
	
	
	public void  dividirGrafico() {
		JOptionPane entrada = new JOptionPane();
		String valor1 = entrada.showInputDialog(null, "Titulo", "Digite o valor 1");
		
		String valor2 = entrada.showInputDialog(null, "Titulo", "Digite o valor 2");
		
		int v1 = Integer.parseInt(valor1);
		int v2 = Integer.parseInt(valor2);
		int divisao = v1/v2;
		
		entrada.showMessageDialog(null, "Resultado:"+divisao, "Titulo", JOptionPane.INFORMATION_MESSAGE);
		
	}
	
	
	public static void main(String [] args) {
		Calculadora samsung = new Calculadora();
		//samsung.somar();
		samsung.somarGrafico();
		samsung.subtrairGrafico();
		samsung.multiplicarGrafico();
		samsung.dividirGrafico();
	}
}
