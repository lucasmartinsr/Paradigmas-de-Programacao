#include <iostream>

using namespace std;

template<typename T>
class node
{
public:
    node *prox;
    T x;
    node(T n):prox(0),x(n){}
};

template<typename T>
class Lista
{
private:
    node<T> *ini;
    int cont;
public:
    Lista() : ini(0),cont(0) {}
    void add(T n)
    {
        node<T> *ptr;

        if(ini)
        {
            for(ptr = ini; ptr->prox; ptr = ptr->prox);
            ptr->prox = new node<T>(n);
        }
        else
        {
             ini = new node<T>(n);
        }
        cont++;
    }

    T get(int i)
    {
        int x;
        node<T> *ptr;
        for(x = 0, ptr = ini;x < i && ptr; x++, ptr = ptr->prox);
        if(ptr)
        {
            return ptr->x;
        }
        throw"Nao contem elemento na lista na posicao desejada";
    }

};

class funcionario
{
private:
    string nome;
protected:
    double sal_base;
public:

    virtual double calc_imposto() = 0;
    virtual double calc_bonus() = 0;

    funcionario(string n)
    {
        nome = n;
    }

    double calc_sal_liq()
    {
        return sal_base - calc_imposto() + calc_bonus();
    }

    double get_x()
    {
        return this->sal_base;
    }

    string get_nome()
    {
        return this->nome;
    }

    void set_x(double x)
    {
        this->sal_base = x;
    }
};

class estagiario:public funcionario
{
public:

    estagiario(string n) :funcionario(n)
    {

    }

    double calc_sal_liq()
    {
        return funcionario::calc_sal_liq();
    }

    double calc_imposto()
    {
        return sal_base * 0.0;
    }

    double calc_bonus()
    {
        return 0.0;
    }
};

class gerente:public funcionario
{
private:
    int qtd_fun_ger;
public:

    gerente(string n):funcionario(n)
    {

    }

    void set_qtd(int x)
    {
        qtd_fun_ger = x;
    }

    double calc_bonus()
    {
        return (sal_base*0.1)*qtd_fun_ger;
    }

    double calc_imposto()
    {
        return sal_base * 0.4;
    }
};

class programador:public funcionario
{
public:

    programador(string n):funcionario(n)
    {

    }

    double calc_imposto()
    {
        return sal_base * 0.4;
    }

    double calc_bonus()
    {
        return 0.0;
    }

};


int main()
{
    int x,sal,qtd;
    string nome;
    char prof;
    cout<<"Informe a quantidade de funcionarios que sera inserido";
    cin>>x;
    Lista <funcionario*> fum;
    for(int i = 0; i < x; i++)
    {
        cout<<"Nome:";
        cin.ignore();
        getline(cin,nome);
        cout<<"Salario:";
        cin>>sal;
        cout<<"Profissao[G gerente, E estagiario, P programador]";
        cin>>prof;
        switch (toupper(prof)) {
        case 'G':
            cout<<"Quantidade de funcionarios gerenciados:";
            cin>>qtd;
            fum.add(new gerente(nome));
            ((gerente*)fum.get(i))->set_qtd(qtd);
            break;
        case 'E':
            fum.add(new estagiario(nome));
            break;
        case 'P':
            fum.add(new programador(nome));
            break;
        }
        fum.get(i)->set_x(sal);
        fum.get(i)->calc_sal_liq();
    }
    cout<<"Nome   Salario"<<endl;
    for(int i = 0; i < x; i++)
    {
        cout<<fum.get(i)->get_nome()<<"  "<<fum.get(i)->calc_sal_liq()<<endl;
    }
    return 0;
}
