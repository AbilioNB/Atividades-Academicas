package beans;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value = "org.hibernate.jpamodelgen.JPAMetaModelEntityProcessor")
@StaticMetamodel(Pacote.class)
public abstract class Pacote_ extends beans.Viagem_ {

	public static volatile SingularAttribute<Pacote, Double> taxaDesconto;
	public static volatile SingularAttribute<Pacote, Cliente> clientePacote;
	public static volatile SingularAttribute<Pacote, Double> pacoteId;
	public static volatile SingularAttribute<Pacote, Viagem> viagemPacote;
	public static volatile SingularAttribute<Pacote, Double> valorFinal;
	public static volatile SingularAttribute<Pacote, Integer> qtdClientes;

	public static final String TAXA_DESCONTO = "taxaDesconto";
	public static final String CLIENTE_PACOTE = "clientePacote";
	public static final String PACOTE_ID = "pacoteId";
	public static final String VIAGEM_PACOTE = "viagemPacote";
	public static final String VALOR_FINAL = "valorFinal";
	public static final String QTD_CLIENTES = "qtdClientes";

}

