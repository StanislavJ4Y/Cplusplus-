#include <iostream>

using namespace std;

class Tree {
protected:
    void drawTrunk() const {
        cout << "  /\\\n";
    }

public:
    virtual void draw() const = 0; // віртуальний метод
};

class Tree1 : public Tree {
public:
    virtual void draw() const override { //// означає, що різні об'єкти можуть вести себе по-різному при виклику одного і того ж методу
        cout << "Drawing 1:\n";
        drawTrunk();
        cout << " //\\\\\n";
    }
};

class Tree2 : public Tree {
public:
    virtual void draw() const override {
        cout << "Drawing 2:\n";
        drawTrunk();
        cout << " /**\\\n";
    }
};

class Tree3 : public Tree {
public:
    virtual void draw() const override {
        cout << "Drawing 3:\n";
        drawTrunk();
        cout << " /++\\\n";
    }
};

int main() {
    Tree1 t1; 
    Tree2 t2; 
    Tree3 t3; 

    Tree* trees[3]; // Масив покажчиків на об'єкти Tree 

    // масив, який може містити об'єкти різних класів
    trees[0] = &t1; 
    trees[1] = &t2; 
    trees[2] = &t3; 

    // Виклик методу малювання для кожного об'єкту в масиві
    for (int i = 0; i < 3; i++) {
        trees[i]->draw();
    }

    return 0;
}