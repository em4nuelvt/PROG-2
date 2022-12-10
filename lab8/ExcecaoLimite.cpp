#include "ExcecaoLimite.hpp"

ExcecaoLimite::ExcecaoLimite():runtime_error("Exception: Valor superior ao saldo/limite da conta...\n"){
    cout<<"Transação negada."<<endl;
}