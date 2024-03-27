package src;
public interface IVeiculo{
	
	public abstract Float emitirPassagem(Float taxa);
	public abstract Float calcularPagamento(Float valorFixo, Float distancia, Float taxa);
	public abstract Double calcularTempoViagem(Integer valorFixo, Integer x1, Integer y1, Integer x2, Integer y2);

}