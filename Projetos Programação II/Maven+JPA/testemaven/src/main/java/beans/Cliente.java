package beans;


import javax.persistence.Entity;
import javax.persistence.OneToMany;
import java.util.ArrayList;
@Entity
public class Cliente extends Pessoa {

    @OneToMany
    private ArrayList<Pacote> viagensFeitas = new ArrayList();

    public ArrayList <Pacote> getViagensFeitas() {
        return viagensFeitas;
    }

    public void setViagensFeitas(ArrayList <Pacote> viagensFeitas) {
        this.viagensFeitas = viagensFeitas;
    }
}
