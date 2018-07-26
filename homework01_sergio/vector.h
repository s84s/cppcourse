class Vector {
public:

    Vector() {
        this->x = 0;
        this->y = 0;
    }

    Vector(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int GetX() {
        return this->x;
    }

    int GetY() {
        return this->y;
    }

    void Add(Vector new_vector) {
        this->x += new_vector.GetX();
        this->y += new_vector.GetY();
    }

    bool operator==(Vector new_vector) {
        return (this->GetX() == new_vector.GetX())
               && (this->GetY() == new_vector.GetY());
    }

private:
    int x;
    int y;
};
