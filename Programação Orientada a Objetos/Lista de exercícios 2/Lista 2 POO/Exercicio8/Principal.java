package lista;
public class Principal {
	

	
	public Principal() {
		
		try {
			throw new ExceptionB("EXCECAO B");
			
		}catch(ExceptionA a) {
			System.out.println(a.getMessage());
		}
		
		
		try {
			throw new ExceptionC("EXCECAO C");
		}catch(ExceptionA a) {
			System.out.println(a.getMessage());
		}
	}
	
	
	public static void main(String [] args) {
		new Principal();
	}
}
