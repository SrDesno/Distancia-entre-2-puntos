class punto
{
    private:
        float x,y;

    public:
        punto();
        void setX();
        float getX();
        void setY();
        float getY();
        float distanciaPuntos(punto p2);
        virtual~punto();
};