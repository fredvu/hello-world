// 1er bout de code de test
class ObjetDeBase {
  private:
    int iNum; // record number
    char sLabel[51]; // label
  public:
    void ObjetDeBase(int iNb, char *Str);
    void display(); // display the values   
}

void main()
{
  ObjetDeBase titi(7;"test minimal");
  titi.display();
}
