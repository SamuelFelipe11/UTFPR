package src;

import javax.swing.JOptionPane;

public class Principal {

	public Principal() {
		Calculadora samsung = new Calculadora();
		Calculadora hp = new Calculadora();
		Calculadora dell = new Calculadora();
		
		/*samsung.setCampo1(10);
		samsung.setCampo2(20);
		*/
		
		//=========== Interface Gráfica ====================
		JOptionPane entrada = new JOptionPane();
		String valor1 = entrada.showInputDialog(null,"Campo1:","Titulo");
		int campo1 = Integer.parseInt(valor1);
		samsung.setCampo1(campo1);
		String valor2 = entrada.showInputDialog(null,"Campo2:","Titulo");
		int campo2 = Integer.parseInt(valor2);
		samsung.setCampo2(campo2);
		entrada.showMessageDialog(null,"Soma:" + samsung.somar());
		//=================================================
		
		
		samsung.setCor("Preto");
		samsung.setMarca("SAMSUNG");
		samsung.setTamanho(12.1f);
		int valor = samsung.somar();
		System.out.println("Detalhes da calculadora: "+samsung);
		System.out.println("Valor somado na calculadora samsung: " +valor);
		
		
		hp.setCampo1(15);
		hp.setCampo2(32);
		hp.setCor("Branco");
		hp.setMarca("HP");
		hp.setTamanho(9.6f);
		valor = hp.somar();
		System.out.println("\nDetalhes da calculadora: "+hp);
		System.out.println("Valor somado na calculadora hp:"+valor);
	
		dell.setCampo1(27);
		dell.setCampo2(96);
		dell.setCor("Azul escuro");
		dell.setMarca("DELL");
		dell.setTamanho(10.2f);
		valor = dell.somar();
		System.out.println("\nDetalhes da calculadora: "+dell);
		System.out.println("Valor somado na calculadora hp:"+valor);
		
	}
	
	public static void main (String [] args) {
		Principal principal = new Principal();
	}
}
