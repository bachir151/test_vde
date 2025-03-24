#include <iostream>

using namespace std;

bool test (int* tabA, int* tabB, const int taille){

    cout << "Taille du tableau après passage en argument : " << taille << endl;

    cout << "taille réelle : " << sizeof(taille) << endl;
    bool reponse = true; 

    for (int i=0; i <taille; i++ ){
        if(*(tabA+i) != *(tabB+i)){
             return false; 

        }

        cout << i << endl; 
        if (tabA[i] != tabB[i]){
            reponse = false;
            
        }

    }

    return reponse;
}


int 




int main(){
    
   const int taille = 5;
   int tab1 [taille] = {1,2,3,4,5};
   int tab2 [taille] = {1,2,8,4,5};


    cout << "taille tabnleau " << sizeof(tab1) << endl; 

    bool resultat = test(tab1, tab2,taille );

    bool a = false; 

    cout << " les deux tableaux sont  ils égaux ?  :"<< resultat << endl;



    return 0;
}