package polimorfismo;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Pessoa {
	private String nome;
	private String cpf;
	private Date dataNascimento;

	public Pessoa(String nome, String cpf, Date dataNascimento) {
		this.setNome(nome);
		this.setCpf(cpf);
		this.setDataNascimento(dataNascimento);
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public Date getDataNascimento() {
		return dataNascimento;
	}

	public void setDataNascimento(Date dataNascimento) {
		this.dataNascimento = dataNascimento;
	}
}

abstract class Funcionario extends Pessoa{
	
	protected double salario;
	
	public Funcionario(String nome, String cpf, Date dataNascimento, double salario) {
		super(nome, cpf, dataNascimento);
		this.salario = salario;
	}
	
	public Funcionario(Pessoa p, double salario) {
		super(p.getNome(), p.getCpf(), p.getDataNascimento());
		this.salario = salario;
	}
	
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	
	public abstract double getBonus();
}

public class Desenvolvedor extends Funcionario {
	
	public Desenvolvedor(Pessoa p, double salario) {
		super(p, salario);
	}

	public double getBonus() {
		return salario * 0.25;
	}

}

public class Gerente extends Funcionario {
	
	public Gerente(Pessoa p, double salario) {
		super(p, salario);
	}

	public double getBonus() {
		return salario * 0.3;
	}
}

public class Polimorfismo {
	public static void main(String[] args) {
		Pessoa p = new Pessoa("José Ricardo", "70213018128", new SimpleDateFormat("yyyy-MM-dd").parse("1996-7-30"));
		Funcionario g = new Gerente(p, 5000.0);
		System.out.println(g.getBonus());
	}
}
