class Calc
{
    private:
        double num1;
        double num2;
        double  resultado;
        bool primeira_operacao;
        int operacao;
        bool visor_limpo;
    public:
        void setNum1(double num);
        void setNum2(double num);
        void serResultado(double num);
        void soma();
        void subtrai();
        void multiplica();
        void divide();
        float getResultado();
        Calc();
        void segunda_operacao();
        void calculadora();
};