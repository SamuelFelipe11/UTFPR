package lista;
public interface IVeiculo{
	
	public abstract Float emitirPassagem(Float taxa);
	public abstract Float calcularPagamento(Float valorFixo, Float distancia, Float taxa);
	public abstract void calcularTempoViagem();

}