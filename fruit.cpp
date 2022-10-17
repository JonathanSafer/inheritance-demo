
#include<vector>
#include"fruit.hpp"

int main(){
    vector<Fruit *> fruit;

    fruit.push_back(new Fruit());
    fruit.push_back(new Banana());
    fruit.push_back(new Tangerine());
    fruit.push_back(new Pear());

    for (auto f : fruit) {
        f->Identify();
    }
    return 0;
}