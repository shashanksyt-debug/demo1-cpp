#include<iostream>
using namespace std;

class car{
  string company;
  string model;
  int year;
  public:
    void set_model(string company, string model, int year){
      this->company = company;
      this->model = model;
      this->year = year;
    }

    void get_model(car c){
      cout << company << " " << model << " ," << year << endl;
    }
};

int main() {
  car c,c1;
  c.set_model("Ford","Mustang",2024);
  c1.set_model("Pagani","Zonda R",2015);

  c.get_model(c);
  c1.get_model(c1);
  return 0;
}