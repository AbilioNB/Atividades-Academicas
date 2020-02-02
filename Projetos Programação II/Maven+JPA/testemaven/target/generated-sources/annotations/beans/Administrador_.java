package beans;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value = "org.hibernate.jpamodelgen.JPAMetaModelEntityProcessor")
@StaticMetamodel(Administrador.class)
public abstract class Administrador_ extends beans.Pessoa_ {

	public static volatile SingularAttribute<Administrador, String> senha;
	public static volatile SingularAttribute<Administrador, String> login;

	public static final String SENHA = "senha";
	public static final String LOGIN = "login";

}

