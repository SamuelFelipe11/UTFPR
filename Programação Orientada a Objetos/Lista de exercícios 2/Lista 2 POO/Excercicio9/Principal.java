package lista;

import java.io.IOException;

public class Principal {

	
	public Principal() {
		try {
			throw new ExceptionA();
		}catch(Exception a) {
			System.out.println("Tipo da exceção: " + a.getClass().getSimpleName());
		}

		try {
			throw new ExceptionB();
		}catch(Exception a) {
			System.out.println("Tipo da exceção: " + a.getClass().getSimpleName());
		}
		
		try {
			throw new NullPointerException();
		}catch(Exception a) {
			System.out.println("Tipo da exceção: " + a.getClass().getSimpleName());
		}
		
		try {
			throw new IOException();
		}catch(Exception a) {
			System.out.println("Tipo da exceção: " + a.getClass().getSimpleName());
		}
	}
	
	
	public static void main(String [] args) {
		new Principal();
	}
}
