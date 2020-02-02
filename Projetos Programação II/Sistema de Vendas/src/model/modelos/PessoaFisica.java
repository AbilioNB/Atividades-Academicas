package model.modelos;

public class PessoaFisica extends Pessoa {

    String cpf;


    @Override
    public String toString(){


        return "Nome:"+nome+"\nCPF:"+cpf+"\nEmail:"+email;

    }

    public String getCpf(){
        return cpf;
    }

    public void setCpf(String cpf){
        this.cpf=cpf;
    }

}