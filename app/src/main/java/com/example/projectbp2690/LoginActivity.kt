package com.example.projectbp2690

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.Toast

class LoginActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login)


        val btnLogin:Button = findViewById(R.id.buttonlogin)
        val txtUsername:EditText = findViewById(R.id.username)
        val txtPassword:EditText = findViewById(R.id.passwords)

        btnLogin.setOnClickListener{

            if(txtUsername.text.toString().equals("Qadar") && txtPassword.text.toString().equals("amikom")) {
                val intentHome = Intent(this, HomeActivity::class.java)
                startActivity(intentHome)
            }

            else {
                Toast.makeText(this, "Username atau Password Salah", Toast.LENGTH_SHORT).show()
            }
        }
    }
}