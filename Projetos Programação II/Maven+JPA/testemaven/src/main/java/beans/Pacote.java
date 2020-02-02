package beans;
import javax.persistence.Embedded;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToOne;
import java.util.ArrayList;
import java.util.List;

@Entity
public class Pacote extends Viagem {



    private double taxaDesconto;
    @Embedded
    private Viagem viagemPacote;
    private int qtdClientes;
    private double valorFinal;
    @Id
    private Double pacoteId;
    @ManyToOne
    private Cliente clientePacote;



    public double getTaxaDesconto() {
        return taxaDesconto;
    }

    public void setTaxaDesconto(double taxaDesconto) {
        this.taxaDesconto = taxaDesconto;
    }

    public Viagem getViagemPacote() {
        return viagemPacote;
    }

    public void setViagemPacote(Viagem viagemPacote) {
        this.viagemPacote = viagemPacote;
    }

    public int getQtdClientes() {
        return qtdClientes;
    }

    public void setQtdClientes(int qtdClientes) {
        this.qtdClientes = qtdClientes;
    }
}
