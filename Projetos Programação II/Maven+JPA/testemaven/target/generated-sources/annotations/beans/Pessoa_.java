package beans;

import javax.annotation.Generated;
import javax.persistence.metamodel.SingularAttribute;
import javax.persistence.metamodel.StaticMetamodel;

@Generated(value = "org.hibernate.jpamodelgen.JPAMetaModelEntityProcessor")
@StaticMetamodel(Pessoa.class)
public abstract class Pessoa_ {

	public static volatile SingularAttribute<Pessoa, Integer> idade;
	public static volatile SingularAttribute<Pessoa, String> telefone;
	public static volatile SingularAttribute<Pessoa, Integer> bancoId;
	public static volatile SingularAttribute<Pessoa, String> data;
	public static volatile SingularAttribute<Pessoa, String> cpf;
	public static volatile SingularAttribute<Pessoa, String> nome;
	public static volatile SingularAttribute<Pessoa, String> email;

	public static final String IDADE = "idade";
	public static final String TELEFONE = "telefone";
	public static final String BANCO_ID = "bancoId";
	public static final String DATA = "data";
	public static final String CPF = "cpf";
	public static final String NOME = "nome";
	public static final String EMAIL = "email";

}

