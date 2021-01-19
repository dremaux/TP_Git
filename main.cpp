/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 7 janvier 2021, 18:38
 */

#include <QApplication>
#include <iostream> 
using namespace std;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    cout << "Boujour" << endl;
    cout << "nouveau test" << endl;
    cout << "encore un teste pour voire" << endl;
    // create and show your widgets here

    return app.exec();
}
