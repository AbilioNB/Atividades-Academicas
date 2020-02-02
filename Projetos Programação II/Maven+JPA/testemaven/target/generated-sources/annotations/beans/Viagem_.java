package beans;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value = "org.hibernate.jpamodelgen.JPAMetaModelEntityProcessor")
@StaticMetamodel(Viagem.class)
public abstract class Viagem_ {

	public static volatile SingularAttribute<Viagem, Integer> qtVagas;
	public static volatile SingularAttribute<Viagem, Integer> ativo;
	public static volatile SingularAttribute<Viagem, String> chegada;
	public static volatile SingularAttribute<Viagem, String> origem;
	public static volatile SingularAttribute<Viagem, Double> valor;
	public static volatile SingularAttribute<Viagem, String> destino;
	public static volatile SingularAttribute<Viagem, Long> id;
	public static volatile SingularAttribute<Viagem, String> descricao;
	public static volatile SingularAttribute<Viagem, String> partida;

	public static final String QT_VAGAS = "qtVagas";
	public static final String ATIVO = "ativo";
	public static final String CHEGADA = "chegada";
	public static final String ORIGEM = "origem";
	public static final String VALOR = "valor";
	public static final String DESTINO = "destino";
	public static final String ID = "id";
	public static final String DESCRICAO = "descricao";
	public static final String PARTIDA = "partida";

}

