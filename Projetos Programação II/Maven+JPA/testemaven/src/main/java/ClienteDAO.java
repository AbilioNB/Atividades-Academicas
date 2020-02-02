import beans.Administrador;
import beans.Cliente;
import beans.Pessoa;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

public class ClienteDAO {

    public void salvarCliente(Pessoa buffer){

        EntityManagerFactory emf = Persistence.createEntityManagerFactory("persistarq");
        EntityManager em = emf.createEntityManager();

        em.getTransaction().begin();
        em.persist(buffer);
        em.getTransaction().commit();
        em.close();
        emf.close();
    }

    public Pessoa exibirCliente(int id ){
        Pessoa show = new Pessoa();
        EntityManagerFactory emf = Persistence.createEntityManagerFactory("persistarq");
        EntityManager em = emf.createEntityManager();

        em.getTransaction().begin();
        show = em.find(Pessoa.class,id);
        return show;
    }

    public void salvarAdm(Administrador buffer){

        EntityManagerFactory emf = Persistence.createEntityManagerFactory("persistarq");
        EntityManager em = emf.createEntityManager();

        em.getTransaction().begin();
        em.persist(buffer);
        em.getTransaction().commit();
        em.close();
        emf.close();
    }
}
