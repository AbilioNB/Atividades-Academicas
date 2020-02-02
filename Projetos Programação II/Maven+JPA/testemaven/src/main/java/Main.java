import beans.Administrador;
import beans.Cliente;
import beans.Pessoa;


public class Main {

    public static void main(String[] args) {
        System.out.println("HPainel start");

        Pessoa buffer = new Pessoa();
        Administrador buffAdm = new Administrador();

        buffer.setNome("Joana Fogosa");
        buffer.setEmail("emailde joana");
        buffer.setCpf("11487004479");
        buffAdm.setLogin("abelardo");
        buffAdm.setSenha("barbosa");
        buffAdm.setNome("Tiririca");



        ClienteDAO salves = new ClienteDAO();


       salves.salvarCliente(buffer);
       salves.salvarAdm(buffAdm);
        Pessoa clien = new Pessoa();
        clien=salves.exibirCliente(2);
       System.out.println(clien.getNome());





    }
}
