#include "principal.h"
#include "ui_principal.h"
#include <QLabel>
#include <stdlib.h>

Principal::Principal(QWidget *parent) :QMainWindow(parent),ui(new Ui::Principal) {
    ui->setupUi(this);
    log = QString("Início");
    connect(ui->start, SIGNAL(clicked()), this, SLOT(start()));
    connect(ui->random, SIGNAL(clicked()), this, SLOT(random()));
}

void Principal::start() {
    vector<vector<int> > start(3);
    vector <vector<int> > goal(3);

    ui->text_log->setText("");

    start.at(0).push_back(3);
    start.at(0).push_back(1);
    start.at(0).push_back(2);
    start.at(1).push_back(4);
    start.at(1).push_back(5);
    start.at(1).push_back(8);
    start.at(2).push_back(6);
    start.at(2).push_back(0);
    start.at(2).push_back(7);

    goal.at(0).push_back(0);
    goal.at(0).push_back(1);
    goal.at(0).push_back(2);
    goal.at(1).push_back(3);
    goal.at(1).push_back(4);
    goal.at(1).push_back(5);
    goal.at(2).push_back(6);
    goal.at(2).push_back(7);
    goal.at(2).push_back(8);

    this->setLog("Inversões: "+QString("%1").arg(inversoes(start)));
    this->setLog("Algortimo: "+ui->combo_box->currentText());
    QString a = ui->combo_box->currentText();
    QString b = "Largura";

    if(a == b){
        largura(start, goal);
    } else {
        profundidade(start, goal);
    }

    qApp->processEvents();
}

void Principal::setLog(const QString string){

    this->log.append("\n"+string);
    ui->text_log->setText(log);
    ui->text_log->show();
    QApplication::processEvents();
}

void Principal::setNewDisplayPosition(int posicao0, int posicao1,int posicao2,int posicao3,int posicao4,int posicao5,int posicao6,int posicao7,int posicao8){

    if(posicao0 == 0){
        ui->label_0->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_0->setText("");
    }else{
        ui->label_0->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_0->setText(QString("%1").arg(posicao0));
    }

    if(posicao1 == 0){
        ui->label_1->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_1->setText("");
    }else{
        ui->label_1->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_1->setText(QString("%1").arg(posicao1));
    }

    if(posicao2 == 0){
        ui->label_2->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_2->setText("");
    }else{
        ui->label_2->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_2->setText(QString("%1").arg(posicao2));
    }

    if(posicao3 == 0){
        ui->label_3->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_3->setText("");
    }else{
        ui->label_3->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_3->setText(QString("%1").arg(posicao3));
    }

    if(posicao4 == 0){
        ui->label_4->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_4->setText("");
    }else{
        ui->label_4->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_4->setText(QString("%1").arg(posicao4));
    }

    if(posicao5 == 0){
        ui->label_5->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_5->setText("");
    }else{
        ui->label_5->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_5->setText(QString("%1").arg(posicao5));
    }

    if(posicao6 == 0){
        ui->label_6->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_6->setText("");
    }else{
        ui->label_6->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_6->setText(QString("%1").arg(posicao6));
    }

    if(posicao7 == 0){
        ui->label_7->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_7->setText("");
    }else{
        ui->label_7->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_7->setText(QString("%1").arg(posicao7));
    }

    if(posicao8 == 0){
        ui->label_8->setStyleSheet("background-color: rgb(99,104,175);font: 64pt \"DIN Light\";font-color: rgb(0,0,0);");
        ui->label_8->setText("");
    }else{
        ui->label_8->setStyleSheet("background-color: rgb(255, 255, 255);\nfont: 64pt \"DIN Light\";font-color: rgb(255,255,175);");
        ui->label_8->setText(QString("%1").arg(posicao8));
    }
}

void Principal::delay( int secounds )
{
    QTime dieTime = QTime::currentTime().addMSecs(secounds);
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

int Principal::largura(vector<vector<int> > start, vector < vector<int> > goal){

    vector<pair < vector <vector<int> > , int > > open;
    vector<pair < vector <vector<int> > , int > > closed;
    vector<vector<vector <int> > > children;
    vector<vector<vector <int> > > temp;
    pair < vector <vector<int> > , int >  X;

    int id_pai = -1;
    int flag;
    int cont = 0;

    closed.clear();
    open.push_back(make_pair(start, id_pai));

    while(open.empty() == false){
        X = open.front();
        open.erase(open.begin());

        if(matriz_cmp(X.first, goal)){
            this->setLog(QString("Algoritmo: Busca em largura."));
            this->setLog(QString("Executando Movimentos..."));
            temp.push_back(X.first);
            while(X.second >= 0){
                X.first = closed.at(X.second).first;
                X.second = closed.at(X.second).second;
                temp.push_back(X.first);
                cont++;
            }
             for(int a = temp.size()-1; a >= 0; a--){
                printMatriz(temp.at(a));
             }
             this->setLog(QString("Numero de Estados: "+ QString("%1").arg(cont) ) );
             this->setLog(QString("Numero Total de Estados Visitados: "+QString("%1").arg( id_pai+1) ) );
            return 1;
        } else {
            children = generateChildren(X.first);
            closed.push_back(X);
            id_pai++;
            flag = 0;

            unsigned long i = 0;
            unsigned long j = 0;
            for( i = 0; i < children.size(); i++){
                for(j=0;j<open.size(); j++){
                    if(matriz_cmp(children.at(i), open.at(j).first)){
                        flag = 1;
                    }
                }

                for(j = 0; j < closed.size(); j++){
                    if(matriz_cmp(children.at(i), closed.at(j).first)){
                        flag = 1;
                    }
                }
                if(flag == 0){
                    open.push_back(make_pair(children.at(i), id_pai));
                }
                flag = 0;
            }
        }

    }
     this->setLog(QString("fail"));
    return 1;
}

int Principal::profundidade(vector<vector<int> > start, vector<vector<int> > goal){

    vector<pair < vector <vector<int> > , int > > open;
    vector<pair < vector <vector<int> > , int > > closed;
    pair < vector <vector<int> > , int >  X;
    vector<vector<vector <int> > > children;
    vector<vector<vector <int> > > temp;
    int id_pai = -1;
    int flag;
    int cont = 0;
    closed.clear();
    open.push_back(make_pair(start, id_pai));

    while(open.empty() == false){
        X = open.front();
        open.erase(open.begin());

        if(matriz_cmp(X.first, goal)){
            this->setLog(QString("Algoritmo: Busca em profundidade."));
            this->setLog(QString("Executando Movimentos..."));
            temp.push_back(X.first);
            while(X.second >= 0){
                X.first = closed.at(X.second).first;
                X.second = closed.at(X.second).second;
                temp.push_back(X.first);
                cont++;
            }
            for(int a = temp.size()-1; a >= 0; a--){
               printMatriz(temp.at(a));
            }
            this->setLog(QString("Numero de Estados: "+ QString("%1").arg(cont) ) );
            this->setLog(QString("Numero Total de Estados Visitados: "+QString("%1").arg( id_pai+1) ) );

            return 0;
        } else {
            children = generateChildren(X.first);
            closed.push_back(X);
            //printMatriz(X.first);
            id_pai++;
            flag = 0;

            int i = 0;
            int j = 0;
            for( i = children.size() - 1; i >= 0; i--){
                for(j=0;j<open.size(); j++){
                    if(matriz_cmp(children.at(i), open.at(j).first)){
                        flag = 1;
                    }
                }
                for(j = 0; j < closed.size(); j++){

                    if(matriz_cmp(children.at(i), closed.at(j).first)){
                        flag = 1;
                    }
                }
                if(flag == 0){

                    open.insert(open.begin(), make_pair(children.at(i), id_pai));
                }
                flag = 0;
            }
        }
    }
    this->setLog(QString("Fail"));
    return 1;
}

int Principal::matriz_cmp(vector < vector <int> > first, vector< vector <int> > second){
    for(unsigned long i = 0; i < first.size(); i++){
        for(unsigned long j = 0; j < first.at(i).size(); j++){
            if(first.at(i).at(j) != second.at(i).at(j)){
                return 0;
            }
        }
    }
    return 1;
}

int Principal::printMatriz(vector < vector < int > > matriz){
    vector<int> temp;
    for(int i = matriz.size()-1; i >= 0; i--){
        for(int j = matriz.size()-1; j >= 0; j--){
            temp.push_back(matriz.at(i).at(j));
        }
    }
    setNewDisplayPosition(temp.at(8),temp.at(7),temp.at(6),temp.at(5),temp.at(4),temp.at(3),temp.at(2),temp.at(1),temp.at(0));
    this->delay(1000);
    return 1;
}

void Principal::random(){

    this->setLog(QString("Embaralhando..."));
    vector <vector<int> > valores(9);

    valores.at(0).push_back(4);
    valores.at(0).push_back(1);
    valores.at(0).push_back(2);
    valores.at(0).push_back(5);
    valores.at(0).push_back(7);
    valores.at(0).push_back(0);
    valores.at(0).push_back(6);
    valores.at(0).push_back(8);
    valores.at(0).push_back(3);

    valores.at(1).push_back(5);
    valores.at(1).push_back(1);
    valores.at(1).push_back(4);
    valores.at(1).push_back(0);
    valores.at(1).push_back(6);
    valores.at(1).push_back(2);
    valores.at(1).push_back(7);
    valores.at(1).push_back(8);
    valores.at(1).push_back(3);

    valores.at(2).push_back(8);
    valores.at(2).push_back(2);
    valores.at(2).push_back(4);
    valores.at(2).push_back(6);
    valores.at(2).push_back(7);
    valores.at(2).push_back(3);
    valores.at(2).push_back(5);
    valores.at(2).push_back(0);
    valores.at(2).push_back(1);


    valores.at(3).push_back(2);
    valores.at(3).push_back(4);
    valores.at(3).push_back(5);
    valores.at(3).push_back(7);
    valores.at(3).push_back(3);
    valores.at(3).push_back(0);
    valores.at(3).push_back(6);
    valores.at(3).push_back(1);
    valores.at(3).push_back(8);

    valores.at(4).push_back(0);
    valores.at(4).push_back(1);
    valores.at(4).push_back(5);
    valores.at(4).push_back(3);
    valores.at(4).push_back(8);
    valores.at(4).push_back(2);
    valores.at(4).push_back(4);
    valores.at(4).push_back(7);
    valores.at(4).push_back(6);

    valores.at(5).push_back(6);
    valores.at(5).push_back(7);
    valores.at(5).push_back(4);
    valores.at(5).push_back(3);
    valores.at(5).push_back(0);
    valores.at(5).push_back(2);
    valores.at(5).push_back(5);
    valores.at(5).push_back(1);
    valores.at(5).push_back(8);

    valores.at(6).push_back(5);
    valores.at(6).push_back(1);
    valores.at(6).push_back(0);
    valores.at(6).push_back(7);
    valores.at(6).push_back(8);
    valores.at(6).push_back(2);
    valores.at(6).push_back(4);
    valores.at(6).push_back(3);
    valores.at(6).push_back(6);

    int posicao;
    int vezes = 8;
    while(vezes != 0){
        vezes--;
        posicao = rand() % 7;
        this->setNewDisplayPosition(valores[posicao][0],valores[posicao][1],valores[posicao][2],valores[posicao][3],valores[posicao][4],valores[posicao][5],valores[posicao][6],valores[posicao][7],valores[posicao][8]);
        this->delay(150);
    }

    this->setNewDisplayPosition(3,1,2,4,5,8,6,0,7);
}

int Principal::inversoes(vector<vector<int> > state){
  int cont = 0;

  for(unsigned long i = 0; i < state.size(); i++){
    for(unsigned long j = 0; j < state.at(i).size(); j++){
      for(unsigned long k = i; k < state.size(); k++){
        for(unsigned long l = 0; l < state.at(i).size(); l++){
          if((state[i][j] > state[k][l]) && (state[k][l] != 0)){
            if(k == i && l < j){
              continue;
            }
            cont++;
          }
        }
      }
    }
  }
  return cont;
}

vector<vector<vector <int> > > Principal::generateChildren(vector<vector<int> > state){
    vector<vector<vector <int> > > childrens;
    childrens.clear();

    for(unsigned long i = 0; i < state.size(); i++){
        for(unsigned long j = 0; j < state.at(i).size(); j++){
            if(state.at(i).at(j) == 0){

                if(j > 0){
                    vector<vector<int> > temp(state);
                    int aux;

                    aux = temp.at(i).at(j);
                    temp.at(i).at(j) = temp.at(i).at(j-1);
                    temp.at(i).at(j-1) = aux;

                    childrens.push_back(temp);
                }



                if(i > 0){
                    vector<vector<int> > temp(state);
                    int aux;

                    aux = temp.at(i).at(j);
                    temp.at(i).at(j) = temp.at(i-1).at(j);
                    temp.at(i-1).at(j) = aux;

                    childrens.push_back(temp);
                }

                if(j < state.size() - 1){
                    vector<vector<int> > temp(state);
                    int aux;

                    aux = temp.at(i).at(j);
                    temp.at(i).at(j) = temp.at(i).at(j+1);
                    temp.at(i).at(j+1) = aux;

                    childrens.push_back(temp);
                }
                if(i < state.size() - 1){
                    vector<vector<int> > temp(state);
                    int aux;

                    aux = temp.at(i).at(j);
                    temp.at(i).at(j) = temp.at(i+1).at(j);
                    temp.at(i+1).at(j) = aux;

                    childrens.push_back(temp);
                }
                return childrens;

            }
        }
    }
    return childrens;
}

Principal::~Principal()
{
    delete ui;
}
