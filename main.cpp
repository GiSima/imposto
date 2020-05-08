#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salario, servico, capital, medico, educa;
    double isalario, iservico, icapital;
    double maxDedu, gastosDedu;
    double impTotal;

    cout << "Renda anual com salario: "; cin >> salario;
    cout << "Renda anual com prestacao de servico: "; cin >> servico;
    cout << "Renda anual com ganho de capital: "; cin >> capital;
    cout << "Gastos medicos: "; cin >> medico;
    cout << "Gastos educacionais: "; cin >> educa;

    cout << endl << "RELATORIO DE IMPOSTO DE RENDA" << endl << endl << "CONSOLIDADO DE RENDA:" << endl;

    if (salario < 3000){isalario = 0;}
    else if (salario < 5000){isalario = salario * 0.1;}
    else {isalario = salario * 0.2;}

    if (servico > 0){iservico = servico * 0.15;}

    if (capital > 0){icapital = capital * 0.2;}

    cout << fixed << setprecision(2);
    cout << "Imposto sobre salario: " << isalario << endl;
    cout << "Imposto sobre servico: " << iservico << endl;
    cout << "Imposto sobre ganho de capital: " << icapital << endl;

    impTotal = isalario + iservico + icapital;
    maxDedu = impTotal * 0.3;
    gastosDedu = educa + medico;

    cout << endl << "DEDUCOES:" << endl;
    cout << "Maximo dedutivel: " << maxDedu << endl;
    cout << "Gastos dedutiveis: " << gastosDedu << endl;

    return 0;
}
