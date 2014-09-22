#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <string>
#include <QTime>
#include <iostream>
#include <cmath>
#include <vector>

    using namespace std;

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);


    QString log;
    int largura(vector<vector<int> > start, vector < vector<int> > goal);
    int profundidade(vector<vector<int> > start, vector < vector<int> > goal);
    int hash(vector<vector<int> > state);
    int matriz_cmp(vector < vector <int> > first, vector< vector <int> > second);
    int printMatriz(vector < vector < int > > matriz);
    int inversoes(vector<vector<int> > state);
    vector<vector<vector <int> > > generateChildren (vector<vector<int> > state);
    void setLog(const QString string);
    void setNewDisplayPosition(int posicao0, int posicao1,int posicao2,int posicao3,int posicao4,int posicao5,int posicao6,int posicao7,int posicao8);
    void delay(int secounds);
    ~Principal();

private slots:
    void start();
private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
