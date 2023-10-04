package com.example.projectbp2690;

class LoginModel {

    var username = ""
    var password = ""

    fun loginCek(): Boolean{
        if(username.equals("Qadar") && password.equals("amikom")) {
            return true;
        }
        else {
            return false;
        }
    }
}